	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	subq	$72, %rsp
Lcfi3:
	.cfi_offset %rbx, -24
	leaq	L_.str(%rip), %rdi
	movl	$0, -12(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-16(%rbp), %rsi
	leaq	-20(%rbp), %rdx
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	movl	-16(%rbp), %ecx
	movl	-20(%rbp), %ebx
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	## InlineAsm Start
	addl	%ebx, %eax

	## InlineAsm End
	movl	%eax, -24(%rbp)
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %ebx
	## InlineAsm Start
	subl	%ebx, %eax

	## InlineAsm End
	movl	%eax, -28(%rbp)
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %ebx
	## InlineAsm Start
	imull	%ebx, %eax

	## InlineAsm End
	movl	%eax, -32(%rbp)
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %ecx
	movl	%ecx, -48(%rbp)
	movl	%eax, -44(%rbp)
	## InlineAsm Start
	movl	$0, %edx
	movl	-44(%rbp), %eax
	movl	-48(%rbp), %ebx
	idivl	%ebx

	## InlineAsm End
	movl	%eax, -36(%rbp)
	movl	%edx, -40(%rbp)
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %ecx
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %edx
	movl	-28(%rbp), %ecx
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.4(%rip), %rdi
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %edx
	movl	-32(%rbp), %ecx
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %edx
	movl	-36(%rbp), %ecx
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	movl	-16(%rbp), %esi
	movl	-20(%rbp), %edx
	movl	-40(%rbp), %ecx
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter two integer numbers : "

L_.str.1:                               ## @.str.1
	.asciz	"%d%d"

L_.str.2:                               ## @.str.2
	.asciz	"%d + %d = %d\n"

L_.str.3:                               ## @.str.3
	.asciz	"%d - %d = %d\n"

L_.str.4:                               ## @.str.4
	.asciz	"%d * %d = %d\n"

L_.str.5:                               ## @.str.5
	.asciz	"%d / %d = %d\n"

L_.str.6:                               ## @.str.6
	.asciz	"%d %% %d = %d\n"


.subsections_via_symbols
