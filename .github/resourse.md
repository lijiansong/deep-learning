## deep learning 

### several existing courses:
- feifei li, stanford [cs231n](http://cs231n.stanford.edu/)
- stanford, [ee380](http://web.stanford.edu/class/ee380/)

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
- tensorflow api [page](https://www.tensorflow.org/versions/r0.12/api_docs/python/index.html)
- stanford numpy api [page](http://cs231n.github.io/python-numpy-tutorial/)
- stanford CS 20SI: Tensorflow for Deep Learning Research, checkout this [page](https://web.stanford.edu/class/cs20si/syllabus.html)
- tasklist.vim, checkout this [page](https://github.com/vim-scripts/TaskList.vim)
- refer to this blog to config VIM for PYTHON, checkout this [page](http://www.cnblogs.com/samwei/archive/2011/04/25/2026211.html)
- refer to this blog to config Intellij for tensorflow, checkout this [page](http://www.voidcn.com/article/p-ckrbabya-qx.html)
- for cudaMalloc, its definition is like this:
```
float *d_A = NULL;
err = cudaMalloc((void **)&d_A, size);
```
[link](https://devtalk.nvidia.com/default/topic/472384/cuda-programming-and-performance/cudamalloc-point-to-a-pointer/post/3357107/) and stackoverflow [page](https://stackoverflow.com/questions/7989039/use-of-cudamalloc-why-the-double-pointer)
while for OpenCL, its memory model is by `clCreateBuffer and clSetKernelArg`, you have to write code like this:
```
cl_mem memObj1 = NULL;https://stackoverflow.com/questions/47068709/your-cpu-supports-instructions-that-this-tensorflow-binary-was-not-compiled-to-u
memObj1 = clCreateBuffer(context, CL_MEM_READ_WRITE, contentLength, NULL, &ret);
clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&memObj1);
```
opencl [page](https://www.khronos.org/registry/OpenCL/sdk/1.0/docs/man/xhtml/clSetKernelArg.html)

- Modern CPUs provide a lot of low-level instructions, besides the usual arithmetic and logic, known as extensions, e.g. SSE2, SSE4, AVX, etc, see wiki [page](https://en.wikipedia.org/wiki/Advanced_Vector_Extensions). However, tensorflow default distribution is built [without CPU extensions](https://github.com/tensorflow/tensorflow/issues/7778), such as SSE4.1, SSE4.2, AVX, AVX2, FMA, etc. The default builds (ones from pip install tensorflow) are intended to be compatible with as many CPUs as possible, see stackoverflow [page](https://stackoverflow.com/questions/47068709/your-cpu-supports-instructions-that-this-tensorflow-binary-was-not-compiled-to-u)
- TF_CPP_MIN_LOG_LEVEL is a TensorFlow environment variable responsible for the logs, to silence INFO logs set it to 1, to filter out WARNING 2 and to additionally silence ERROR logs (not recommended) set it to 3:
```
import os
os.environ['TF_CPP_MIN_LOG_LEVEL']='2'
import tensorflow as tf
```
- Check the verison of numpy or scipy by `python -c "import numpy; print numpy.__version__" `
- jupyter notebook tutorial, checkout this [page](http://jupyter-notebook.readthedocs.io/en/stable/)
- `NVPTX ABI`, PTX Writer's Guide to Interoperability, follow this [page](http://docs.nvidia.com/cuda/ptx-writers-guide-to-interoperability/index.html)
- Halide, its github [page](https://github.com/halide/Halide) and its [homepage](http://halide-lang.org/)
- gnome, gdk-pixbuf utils, see this [page](https://developer.gnome.org/gdk-pixbuf/2.22/gdk-pixbuf-util.html)
- DLVM, Modern Compiler Infrastructure for Deep Learning Systems, checkout this [page](http://dlvm.org/)
  - NIPS, short for Conference and Workshop on Neural Information Processing Systems, CCF A
- gpucc: an open-source gpgpu compiler, see its llvm developer meeting [slides](http://llvm.org/devmtg/2015-10/slides/Wu-OptimizingLLVMforGPGPU.pdf)
- cuda constant memory, see [cuda c programming guide](http://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html) and [blog](https://www.cnblogs.com/1024incn/p/4706215.html) and HPC Tech Tips:[cuda memory types performance comparison](https://www.microway.com/hpc-tech-tips/gpu-memory-types-performance-comparison/)
- NVIDIA [compiler sdk](https://developer.nvidia.com/cuda-llvm-compiler#cudacompilersdk) see its official [page](http://docs.nvidia.com/cuda/index.html#compiler-sdk) and libNVVM  examples see its github [repo](https://github.com/nvidia-compiler-sdk/nvvmir-samples)
- ssh remote operation and port translation see this [blog](http://www.ruanyifeng.com/blog/2011/12/ssh_port_forwarding.html)
- Most cited deep learning papers, checkout this github repo: <https://github.com/terryum/awesome-deep-learning-papers>
- Eigen Tutorial, checkout this page: <http://eigen.tuxfamily.org/dox/GettingStarted.html>
- Eigen Tensor README, checkout this page: <https://bitbucket.org/eigen/eigen/src/677c9f1577810e869f4f09881cabc3e503a810c1/unsupported/Eigen/CXX11/src/Tensor/README.md>
- A lightweight template based cpp matrix library, checkout this github repo: <https://github.com/PX4/Matrix>
- IEEE 754, Half-precision floating-point format see this wiki page: <https://en.wikipedia.org/wiki/Half-precision_floating-point_format>
