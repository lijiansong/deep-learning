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
Lcfi3:
	.cfi_offset %rbx, -24
	movl	$0, -12(%rbp)
	## InlineAsm Start
	movl	$10, %eax
	movl	$20, %ebx
	addl	%ebx, %eax

	## InlineAsm End
	## InlineAsm Start
	movl	$10, %eax
	movl	$20, %ebx
	subl	%ebx, %eax

	## InlineAsm End
	## InlineAsm Start
	movl	$10, %eax
	movl	$20, %ebx
	imull	%ebx, %eax

	## InlineAsm End
	xorl	%eax, %eax
	movl	$100, -16(%rbp)
	movl	-16(%rbp), %ecx
	## InlineAsm Start
	movl	%ecx, %ebx
	movl	%ebx, %ecx

	## InlineAsm End
	movl	%ecx, -20(%rbp)
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
