## function call
以如下的C为例子
```
int foo_func(int a)
{
    return a+4;
}
int main()
{
    foo_func(2);
    return 0;
}
```
经过gcc的`-S`编译选项，可以得到其x86平台下的汇编文件，如下：
```

	.file	"foo2.c"
	.text
	.globl	foo_func
	.type	foo_func, @function
foo_func:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	addl	$4, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	foo_func, .-foo_func
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$2, %edi
	call	foo_func
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
```
其中，汇编代码中以`.cfi`开头的伪指令是辅助汇编器创建栈帧（stack frame）信息的,每个函数在调用过程中都会形成一个栈帧，以上面的main调用foo_func为例，main并不是程序中第一个运行的函数，main也是一个被调用的函数，它也有stack frame，第一个被调用的函数_start（该函数实现在启动代码中），也会自己模拟一个stack frame。所以理论上调试器或者异常处理程序完全可以根据frame pointer来遍历调用过程各个函数的stack frame，但是因为gcc的代码优化，可能导致调试器或者异常处理很难甚至不能正常回溯栈帧，所以这些伪指令的目的就是辅助编译过程创建栈帧信息，并将它们保存在目标文件的`.eh_frame`中，这样就不会被编译器优化影响了。
去掉伪指令后，foo_func中CPU真正执行的指令如下：
```
  1 foo_func:
  2     pushq   %rbp
  3     movq    %rsp, %rbp
  4     movl    %edi, -4(%rbp)
  5     movl    -4(%rbp), %eax
  6     addl    $4, %eax
  7     popq    %rbp
  8     ret    
```
在上述汇编片段中，在函数的开头和结尾分别插入一小段代码，分别称为Prologue和Epilogue，e.g.,上述片段中，第2/3/4行是Prologue，第7/8行是Epilogue。Prologue用于保存主调函数的frame pointer,主要是为了在子函数调用结束后，恢复主调函数的栈帧，同时为子函数准本栈帧。如上述代码所示，其主要操作包括：
- 保存主调函数的frame pointer，即第2行汇编指令，就是将保存在rbp寄存器中的frame pointer压栈，以便于在退出子函数时可以从栈中恢复主调函数的frame pointer;
- 将rsp赋给rbp，即将子函数的frame pointer指向主调函数的栈顶，这行代码的意义就是记录了子函数的栈帧的底部，从这里就开始了子函数的栈帧
- 修改栈顶指针,为子函数的本地变量分配栈空间
而Epilogue的功能与Prologue的功能恰恰相反，其主要操作包括：
- 将栈指针rsp指向当前子函数栈帧的frame pointer，即指向当前栈帧的栈底，而这个位置恰好是Prelogue保存的主调函数的frame pointer。然后通过pop将主调函数的frame pointer弹出到rbp中。这样，一方面释放了被调用函数的foo_func的栈帧，同时也回到了主调用函数main的栈帧中。
- 将调用子函数的call指令压栈的返回地址从栈顶pop到EIP中，并跳转到EIP处继续执行，这样CPU就返回到主调函数中继续执行，这个操作由ret指令来完成。
剩下的5/6两行的代码就是为了完成a+4的功能。`movl  -4(%rbp), %eax`取出参数a的值放入寄存器eax中，然后下一条addl指令将其加4


### REF
- <Deep Explore Linux OS>
- IA32 Registers vs x86-64 Registers, checkout this [PAGE](http://www.cnblogs.com/broglie/p/5538151.html)
