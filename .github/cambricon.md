## pipeline
### Description
Cambricon 1A/1H series chips(Intelligent Processing Unit, IPU) adapts trditional `LOAD/STORE architecture`. Data is stored in the off-chip memory denoted as `DDR` and all the computations are carried out on the IPU. The two parts are connected by high speed PCIe bus.

During the computation stage, data is fetched from DDR to the on-chip RAMs on the IPU via a set of "LOAD" instructions. Then the computation results are cached on the RAMs temporarily and they can be stored onto the DDR via a set of "STORE" instructions.
Cambricon 1A/1H IPU is a tile-based design. The IPU consists of one central tile denoted as CT and 16 leaf tiles denoted as LT. In the CT, the on-chip RAMs are spilit into two parts. The on-chip Inst RAMs (denoted as IRAMs) are specially used to store instructions. And the on-chip Central Tile RAMs (denoted as CRAMs) are used to store data and address. In each LT, the on-chip Leaf Tile RAMs (denoted as LRAMs) are future spilit into two banks, namely bank0 and bank1. The on-chip IRAMs are write-only memeory.

The instruction set is categorized into 12 classes, namely CONFIG, COMPUT, IO, SCALAR, INIT_REG, FIX_REG, JMP, SYNC, CB, STRIDE IO, BARRIER and BREAK POINT. All these instructions are used to implement four functions: `configuration, IO operation, controls and computations`. For configuratio use, some parameters are initialized for functional activation; For IO operation use, instructions and data are loaded from DDR to the on-chip IPU RAMs and stored from the on-chip RAMs to the off-chip DDR; For control use, the states of memories, exexcution path and registers are manipulated by these instructions; Fianlly, for the computation use, neural network related calculations such as MLP, CONV, POOL and etc are completed by these instructions.

### LLVM backends
为了设计一种方便开发者在IPU做开发的编程语言，如果利用LLVM来实现，就要修改clang前端（文法设计以及词法语法分析，这部分可以直接修改Clang来完成），同时开发一个后端来支持IPU平台。参考已有的Sparc、NVPTX平台，理解实现的基本原理。需要实现`instruction selection、 instruction scheduling、register allocation、code emission`等基本的过程。

#### Basic Acknowledgement
- RISC处理器的结构特征：统一的寄存器堆；load/store结构，在寄存器上内容上进行数据处理，不直接作用于内存；简单的寻址模式，load/store寻址只根据寄存器内容和指令字段来决定；统一固定长度的指令字段；
- GCC使用RTL(Register Transfer Language)描述后端处理器；
- LLVM编译过程：
  - 高级语言前端将源码转换成中间表示IR（Internal Representation）；
  - LLVM中间代码优化器将前端生成的IR转换为优化过的IR。这一步中，中间层次优化以LLVM IR作为输入，对其进行多遍的处理、分析、优化和重写，生成等价的LLVM IR作为输出。中间代码优化器使用了独立于高级语言前端和LLVM后端的LLVM虚拟指令集，进行一系列的控制流、数据流等分析，收集的信息用于标量优化、循环优化以及过程间优化和全局流优化等等不同优化阶段；
  - 代码生成器将优化后的LLVM IR转换为LLVM支持的后端处理器的汇编指令或者机器指令.
- LLVM中间表示采用静态单赋值（SSA， Static Single Assignment）形式的IR，使用的指令集为LLVM虚拟指令集，其表示形式有三种：存在于内存的IR、存放在磁盘上的字节码(作为JIT在本地执行执行客户处理器代码的格式)、可供阅读的汇编代码
- 后端移植的3个基本工具：llc、lli和tblgen。其中，llc用于从.bc 文件生成目标处理器的汇编代码；而对于支持LLVM的JIT编译器的目标处理器，lli可直接在本地运行目标处理器的.bc代码。tblgen用于将目标处理器的描述转化为相应的描述源代码文件，由此来简化后端目标处理器的移植工作，它要求用LLVM 定义的.td 格式文件来描述
- LLVM后端移植采用，目标静态描述使用tblgen描述目标处理器的后端寄存器、指令、调用约定等基本的属性；动态描述需要开发者手写相关的类来描述目标处理器复杂或者特殊操作
- tablegen中```def AL : Register<"AL">, DwarfRegNum<[0, 0, 0]>;```定义中的`DwarfRegNum`用于调试
- DAG target lowering即降级描述，DAG降级将LLVM虚拟指令从列表格式转换成DAG格式，分为LLVM自动降级和定制降级两种方式，定制降级由XXXTargetLowering根据转换机制处理目标平台不支持的指令

## Reference
[1] Cambricon: An Instruction Set Architecture for Neural Networks</br>
[2] Writing an LLVM Backend<br>
[3] Compiling CUDA with clang<br>
