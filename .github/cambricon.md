## pipeline
### Description
Cambricon 1A/1H series chips(Intelligent Processing Unit, IPU) adapts trditional `LOAD/STORE architecture`. Data is stored in the off-chip memory denoted as `DDR` and all the computations are carried out on the IPU. The two parts are connected by high speed PCIe bus.

During the computation stage, data is fetched from DDR to the on-chip RAMs on the IPU via a set of "LOAD" instructions. Then the computation results are cached on the RAMs temporarily and they can be stored onto the DDR via a set of "STORE" instructions.
Cambricon 1A/1H IPU is a tile-based design. The IPU consists of one central tile denoted as CT and 16 leaf tiles denoted as LT. In the CT, the on-chip RAMs are spilit into two parts. The on-chip Inst RAMs (denoted as IRAMs) are specially used to store instructions. And the on-chip Central Tile RAMs (denoted as CRAMs) are used to store data and address. In each LT, the on-chip Leaf Tile RAMs (denoted as LRAMs) are future spilit into two banks, namely bank0 and bank1. The on-chip IRAMs are write-only memeory.

The instruction set is categorized into 12 classes, namely CONFIG, COMPUT, IO, SCALAR, INIT_REG, FIX_REG, JMP, SYNC, CB, STRIDE IO, BARRIER and BREAK POINT. All these instructions are used to implement four functions: `configuration, IO operation, controls and computations`. For configuratio use, some parameters are initialized for functional activation; For IO operation use, instructions and data are loaded from DDR to the on-chip IPU RAMs and stored from the on-chip RAMs to the off-chip DDR; For control use, the states of memories, exexcution path and registers are manipulated by these instructions; Fianlly, for the computation use, neural network related calculations such as MLP, CONV, POOL and etc are completed by these instructions.

### LLVM backends
为了设计一种方便开发者在IPU做开发的编程语言，如果利用LLVM来实现，就要修改clang前端（文法设计以及词法语法分析，这部分可以直接修改Clang来完成），同时开发一个后端来支持IPU平台。参考已有的Sparc、NVPTX平台，理解实现的基本原理。需要实现instruction selection、 instruction scheduling、register allocation、code emission等基本的过程。

## Reference
[1] Cambricon: An Instruction Set Architecture for Neural Networks
[2] Writing an LLVM Backend
[3] Compiling CUDA with clang
