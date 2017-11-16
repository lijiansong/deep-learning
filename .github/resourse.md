## deep learning 

### several existing courses:
- feifei li, stanford [cs231n](http://cs231n.stanford.edu/)

### other resources about compiling tech
- compile cuda with clang, see this [link](http://llvm.org/docs/CompileCudaWithLLVM.html)
- gpucc: an open-source GPGPU compiler, pdf see [here](http://dl.acm.org/citation.cfm?id=2854041)
- how to write an assembler, refer to this [blog](http://www.cnblogs.com/fanzhidongyzby/p/5812140.html)
- cuda docs, see official [site](https://docs.nvidia.com/)
- book reading < virtual machine design and implementation in C/C++ >
- [Understanding Convolution in Deep Learning](http://timdettmers.com/2015/03/26/convolution-deep-learning/)
- Clang Internals, see [here](http://clang.llvm.org/docs/InternalsManual.html)
- Clang driver internals, see [here](http://clang.llvm.org/docs/DriverInternals.html); [The Clang Universal Driver Project](https://clang.llvm.org/UniversalDriver.html) and LLVM IR details see [here](http://llvm.org/docs/LangRef.html), clang builtin function extensions, see [here](https://clang.llvm.org/docs/LanguageExtensions.html)
- follow this guide to build example target LEG, doc see [here](https://llvm.org/devmtg/2014-04/PDFs/Talks/Building%20an%20LLVM%20backend.pdf)
- what is ABI, see [here](http://www.princeton.edu/~achaney/tmve/wiki100k/docs/Application_binary_interface.html)
- GAS-format assembly language, abt GAS see [here](http://asm.sourceforge.net/howto/gas.html)
- [Life of an instruction in LLVM](http://eli.thegreenplace.net/2012/11/24/life-of-an-instruction-in-llvm/)
- [The LLVM Target-Independent Code Generator](http://llvm.org/docs/CodeGenerator.html)
- [LLVM for OpenRISC: Euro-LLVM 2012 workshop by Anton ](http://opencores.org/forum,OpenRISC,0,4819) and the [llvm dev meeting](http://llvm.org/devmtg/2012-04-12/)
- backup [NNVM](http://tqchen.github.io/2016/10/01/build-your-own-tensorflow-with-nnvm-and-torch.html)
- llvm tools [page](http://llvm.org/docs/CommandGuide/) and [llvm-lit](https://llvm.org/docs/CommandGuide/lit.html), more details of llvm test guide see this [page](http://llvm.org/docs/TestingGuide.html)
- [x] llvm backend for cpu0 arch --- about function call, see this [page](https://jonathan2251.github.io/lbd/funccall.html)
- [ ] [Global Instruction Selection in LLVM](https://2pi.dk/llvm/global-isel)
- [x] FileChecking tool, see this [page](https://github.com/lijiansong/llvm/blob/master/docs/CommandGuide/FileCheck.rst)
- mxnet tvm compilier tutorial, see this [page](http://docs.tvmlang.org/index.html) and tvm news see this [page](http://tvmlang.org/)
- cuda nvcc compiler driver, see this [page](http://docs.nvidia.com/cuda/cuda-compiler-driver-nvcc/index.html#axzz4riJBNyQD)
- cuda nvvm details see this [page](http://on-demand.gputechconf.com/gtc/2013/presentations/S3185-Building-GPU-Compilers-libNVVM.pdf)
- cuda NVVM IR samples see this [page](https://github.com/nvidia-compiler-sdk/nvvmir-samples)
- position independent code, see this [blog](http://eli.thegreenplace.net/2011/11/03/position-independent-code-pic-in-shared-libraries/)
- elf-io interface, see [here](http://elfio.sourceforge.net/)
- gnu assembler, checkout this [page](https://sourceware.org/binutils/docs-2.29/as/index.html)
<<<<<<< HEAD
- tensorflow api [page](https://www.tensorflow.org/versions/r0.12/api_docs/python/index.html)
- stanford numpy api [page](http://cs231n.github.io/python-numpy-tutorial/)
- stanford CS 20SI: Tensorflow for Deep Learning Research, checkout this [page](https://web.stanford.edu/class/cs20si/syllabus.html)
- tasklist.vim, checkout this [page](https://github.com/vim-scripts/TaskList.vim)
- refer to this blog to config VIM for PYTHON, checkout this [page](http://www.cnblogs.com/samwei/archive/2011/04/25/2026211.html)
- refer to this blog to config Intellij for tensorflow, checkout this [page](http://www.voidcn.com/article/p-ckrbabya-qx.html)
=======
- for cudaMalloc, its definition is like this:
```
float *d_A = NULL;
err = cudaMalloc((void **)&d_A, size);
```
[link](https://devtalk.nvidia.com/default/topic/472384/cuda-programming-and-performance/cudamalloc-point-to-a-pointer/post/3357107/) and stackoverflow [page](https://stackoverflow.com/questions/7989039/use-of-cudamalloc-why-the-double-pointer)
while for OpenCL, its memory model is by `clCreateBuffer and clSetKernelArg`, you have to write code like this:
```
cl_mem memObj1 = NULL;
memObj1 = clCreateBuffer(context, CL_MEM_READ_WRITE, contentLength, NULL, &ret);
clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&memObj1);
```
opencl [page](https://www.khronos.org/registry/OpenCL/sdk/1.0/docs/man/xhtml/clSetKernelArg.html)

>>>>>>> 194bbfc57446cea0cd762c7679e503bae5df3a1a
