	.file	"foo.c"
	.globl	myglob
	.data
	.align 4
	.type	myglob, @object
	.size	myglob, 4
myglob:
	.long	42
	.text
	.globl	ml_func
	.type	ml_func, @function
ml_func:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	myglob(%rip), %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	ml_func, .-ml_func
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
