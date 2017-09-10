	.file	"foobar.c"
	.intel_syntax noprefix
	.text
	.globl	foobar
	.type	foobar, @function
foobar:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	DWORD PTR [rbp-20], edi
	mov	DWORD PTR [rbp-24], esi
	mov	DWORD PTR [rbp-28], edx
	mov	eax, DWORD PTR [rbp-20]
	add	eax, 2
	mov	DWORD PTR [rbp-16], eax
	mov	eax, DWORD PTR [rbp-24]
	add	eax, 3
	mov	DWORD PTR [rbp-12], eax
	mov	eax, DWORD PTR [rbp-28]
	add	eax, 4
	mov	DWORD PTR [rbp-8], eax
	mov	eax, DWORD PTR [rbp-12]
	mov	edx, DWORD PTR [rbp-16]
	add	edx, eax
	mov	eax, DWORD PTR [rbp-8]
	add	eax, edx
	mov	DWORD PTR [rbp-4], eax
	mov	eax, DWORD PTR [rbp-16]
	imul	eax, DWORD PTR [rbp-12]
	imul	eax, DWORD PTR [rbp-8]
	mov	edx, eax
	mov	eax, DWORD PTR [rbp-4]
	add	eax, edx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	foobar, .-foobar
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	edx, 99
	mov	esi, 88
	mov	edi, 77
	call	foobar
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
