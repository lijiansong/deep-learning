	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$192, %rsp
	movl	$0, -4(%rbp)
	movl	$128, -8(%rbp)
	movl	$128, %eax
	movl	%eax, %ecx
	leaq	-32(%rbp), %rdi
	vxorps	%xmm0, %xmm0, %xmm0
	movq	%rcx, %rsi
	vmovss	%xmm0, -112(%rbp)       ## 4-byte Spill
	movq	%rcx, -120(%rbp)        ## 8-byte Spill
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEC1Emf
Ltmp0:
	leaq	-56(%rbp), %rdi
	movq	-120(%rbp), %rsi        ## 8-byte Reload
	vmovss	-112(%rbp), %xmm0       ## 4-byte Reload
                                        ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEC1Emf
Ltmp1:
	jmp	LBB0_1
LBB0_1:
	movl	$1102577664, -72(%rbp)  ## imm = 0x41B80000
Ltmp3:
	leaq	-32(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_
Ltmp4:
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	jmp	LBB0_2
LBB0_2:
	movl	$1109917696, -76(%rbp)  ## imm = 0x42280000
Ltmp5:
	leaq	-56(%rbp), %rdi
	leaq	-76(%rbp), %rsi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_
Ltmp6:
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	jmp	LBB0_3
LBB0_3:
	movabsq	$4614253070214989087, %rax ## imm = 0x40091EB851EB851F
	movq	%rax, -104(%rbp)
Ltmp7:
	leaq	-104(%rbp), %rdi
	leaq	-32(%rbp), %rsi
	callq	__ZN4arrrmlIdNS_16arithmetic_arrayIfLm0EEEEENSt3__19enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS3_5tupleIJNS_7mul_tagENS_10store_typeIS5_E4typeENS9_IS6_E4typeEEEEE4typeERKS5_RKS6_
Ltmp8:
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	vmovsd	%xmm0, -152(%rbp)       ## 8-byte Spill
	jmp	LBB0_4
LBB0_4:
	vmovsd	-152(%rbp), %xmm0       ## 8-byte Reload
                                        ## xmm0 = mem[0],zero
	vmovsd	%xmm0, -96(%rbp)
	movq	-144(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -88(%rbp)
Ltmp9:
	leaq	-56(%rbp), %rdi
	leaq	-96(%rbp), %rsi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEpLINSt3__15tupleIJNS_7mul_tagEdRKS1_EEEEERS1_RKT_
Ltmp10:
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	jmp	LBB0_5
LBB0_5:
	movl	$0, -108(%rbp)
LBB0_6:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$128, -108(%rbp)
	jge	LBB0_14
## BB#7:                                ##   in Loop: Header=BB0_6 Depth=1
	movslq	-108(%rbp), %rsi
Ltmp11:
	leaq	-56(%rbp), %rdi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEixEm
Ltmp12:
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	jmp	LBB0_8
LBB0_8:                                 ##   in Loop: Header=BB0_6 Depth=1
	movq	-168(%rbp), %rax        ## 8-byte Reload
	vmovss	(%rax), %xmm0           ## xmm0 = mem[0],zero,zero,zero
Ltmp13:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
Ltmp14:
	movq	%rax, -176(%rbp)        ## 8-byte Spill
	jmp	LBB0_9
LBB0_9:                                 ##   in Loop: Header=BB0_6 Depth=1
Ltmp15:
	leaq	L_.str(%rip), %rsi
	movq	-176(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
Ltmp16:
	movq	%rax, -184(%rbp)        ## 8-byte Spill
	jmp	LBB0_10
LBB0_10:                                ##   in Loop: Header=BB0_6 Depth=1
	jmp	LBB0_11
LBB0_11:                                ##   in Loop: Header=BB0_6 Depth=1
	movl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -108(%rbp)
	jmp	LBB0_6
LBB0_12:
Ltmp2:
	movl	%edx, %ecx
	movq	%rax, -64(%rbp)
	movl	%ecx, -68(%rbp)
	jmp	LBB0_15
LBB0_13:
Ltmp17:
	leaq	-56(%rbp), %rdi
	movl	%edx, %ecx
	movq	%rax, -64(%rbp)
	movl	%ecx, -68(%rbp)
	callq	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	jmp	LBB0_15
LBB0_14:
	leaq	-56(%rbp), %rdi
	movl	$0, -4(%rbp)
	callq	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	leaq	-32(%rbp), %rdi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	movl	-4(%rbp), %eax
	addq	$192, %rsp
	popq	%rbp
	retq
LBB0_15:
	leaq	-32(%rbp), %rdi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
## BB#16:
	movq	-64(%rbp), %rdi
	callq	__Unwind_Resume
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\266\200\200"          ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset0 = Lfunc_begin0-Lfunc_begin0       ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp0-Lfunc_begin0              ##   Call between Lfunc_begin0 and Ltmp0
	.long	Lset1
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset2 = Ltmp0-Lfunc_begin0              ## >> Call Site 2 <<
	.long	Lset2
Lset3 = Ltmp1-Ltmp0                     ##   Call between Ltmp0 and Ltmp1
	.long	Lset3
Lset4 = Ltmp2-Lfunc_begin0              ##     jumps to Ltmp2
	.long	Lset4
	.byte	0                       ##   On action: cleanup
Lset5 = Ltmp3-Lfunc_begin0              ## >> Call Site 3 <<
	.long	Lset5
Lset6 = Ltmp16-Ltmp3                    ##   Call between Ltmp3 and Ltmp16
	.long	Lset6
Lset7 = Ltmp17-Lfunc_begin0             ##     jumps to Ltmp17
	.long	Lset7
	.byte	0                       ##   On action: cleanup
Lset8 = Ltmp16-Lfunc_begin0             ## >> Call Site 4 <<
	.long	Lset8
Lset9 = Lfunc_end0-Ltmp16               ##   Call between Ltmp16 and Lfunc_end0
	.long	Lset9
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN4arrr16arithmetic_arrayIfLm0EEC1Emf
	.weak_def_can_be_hidden	__ZN4arrr16arithmetic_arrayIfLm0EEC1Emf
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EEC1Emf: ## @_ZN4arrr16arithmetic_arrayIfLm0EEC1Emf
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	vmovss	%xmm0, -20(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	vmovss	-20(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr16arithmetic_arrayIfLm0EEC2Emf
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_
	.weak_definition	__ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_: ## @_ZN4arrr16arithmetic_arrayIfLm0EEaSIfEERS1_RKT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	-64(%rbp), %rax
	movq	%rdi, -32(%rbp)
	movq	%rsi, -40(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$8, %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	%rdi, -64(%rbp)
	movq	-40(%rbp), %rdi
	movq	%rdi, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	%rsi, -80(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr5storeIPffEENSt3__15tupleIJNS_9store_tagENS_10store_typeIT_E4typeENS5_IT0_E4typeEEEERKS6_RKS9_
	movq	%rax, -56(%rbp)
	vmovss	%xmm0, -48(%rbp)
	movq	-80(%rbp), %rax         ## 8-byte Reload
	movq	(%rax), %rsi
	movq	-56(%rbp), %rdi
	vmovss	-48(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESB_m
	movq	-80(%rbp), %rax         ## 8-byte Reload
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrrmlIdNS_16arithmetic_arrayIfLm0EEEEENSt3__19enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS3_5tupleIJNS_7mul_tagENS_10store_typeIS5_E4typeENS9_IS6_E4typeEEEEE4typeERKS5_RKS6_
	.weak_definition	__ZN4arrrmlIdNS_16arithmetic_arrayIfLm0EEEEENSt3__19enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS3_5tupleIJNS_7mul_tagENS_10store_typeIS5_E4typeENS9_IS6_E4typeEEEEE4typeERKS5_RKS6_
	.p2align	4, 0x90
__ZN4arrrmlIdNS_16arithmetic_arrayIfLm0EEEEENSt3__19enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS3_5tupleIJNS_7mul_tagENS_10store_typeIS5_E4typeENS9_IS6_E4typeEEEEE4typeERKS5_RKS6_: ## @_ZN4arrrmlIdNS_16arithmetic_arrayIfLm0EEEEENSt3__19enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS3_5tupleIJNS_7mul_tagENS_10store_typeIS5_E4typeENS9_IS6_E4typeEEEEE4typeERKS5_RKS6_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi9:
	.cfi_def_cfa_offset 16
Lcfi10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi11:
	.cfi_def_cfa_register %rbp
	subq	$256, %rsp              ## imm = 0x100
	movq	%rdi, -368(%rbp)
	movq	%rsi, -376(%rbp)
	movq	-368(%rbp), %rsi
	movq	-376(%rbp), %rdi
	leaq	-360(%rbp), %rax
	movq	%rax, -320(%rbp)
	leaq	-384(%rbp), %rax
	movq	%rax, -328(%rbp)
	movq	%rsi, -336(%rbp)
	movq	%rdi, -344(%rbp)
	movq	-320(%rbp), %rax
	movq	-328(%rbp), %rsi
	movq	-336(%rbp), %rdi
	movq	-344(%rbp), %rcx
	movq	%rax, -256(%rbp)
	movq	%rsi, -264(%rbp)
	movq	%rdi, -272(%rbp)
	movq	%rcx, -280(%rbp)
	movq	-256(%rbp), %rax
	movq	-264(%rbp), %rcx
	movq	%rcx, -248(%rbp)
	movq	-248(%rbp), %rcx
	movq	-272(%rbp), %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-280(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rax, -216(%rbp)
	movq	%rcx, -224(%rbp)
	movq	%rsi, -232(%rbp)
	movq	%rdi, -240(%rbp)
	movq	-216(%rbp), %rax
	movq	-224(%rbp), %rcx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdi
	movq	%rax, -152(%rbp)
	movq	%rcx, -160(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdi, -176(%rbp)
	movq	-152(%rbp), %rax
	movq	-160(%rbp), %rcx
	movq	%rcx, -112(%rbp)
	movq	-112(%rbp), %rcx
	movq	%rax, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	%rcx, -24(%rbp)
	movq	-168(%rbp), %rcx
	movq	%rcx, -48(%rbp)
	movq	-48(%rbp), %rcx
	movq	%rax, -64(%rbp)
	movq	%rcx, -72(%rbp)
	movq	-64(%rbp), %rcx
	movq	-72(%rbp), %rsi
	movq	%rsi, -56(%rbp)
	movq	-56(%rbp), %rsi
	vmovsd	(%rsi), %xmm0           ## xmm0 = mem[0],zero
	vmovsd	%xmm0, (%rcx)
	addq	$8, %rax
	movq	-176(%rbp), %rcx
	movq	%rcx, -80(%rbp)
	movq	-80(%rbp), %rcx
	movq	%rax, -96(%rbp)
	movq	%rcx, -104(%rbp)
	movq	-96(%rbp), %rax
	movq	-104(%rbp), %rcx
	movq	%rcx, -88(%rbp)
	movq	-88(%rbp), %rcx
	movq	%rcx, (%rax)
	vmovsd	-360(%rbp), %xmm0       ## xmm0 = mem[0],zero
	movq	-352(%rbp), %rax
	addq	$256, %rsp              ## imm = 0x100
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EEpLINSt3__15tupleIJNS_7mul_tagEdRKS1_EEEEERS1_RKT_
	.weak_definition	__ZN4arrr16arithmetic_arrayIfLm0EEpLINSt3__15tupleIJNS_7mul_tagEdRKS1_EEEEERS1_RKT_
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EEpLINSt3__15tupleIJNS_7mul_tagEdRKS1_EEEEERS1_RKT_: ## @_ZN4arrr16arithmetic_arrayIfLm0EEpLINSt3__15tupleIJNS_7mul_tagEdRKS1_EEEEERS1_RKT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi12:
	.cfi_def_cfa_offset 16
Lcfi13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi14:
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	leaq	-104(%rbp), %rax
	movq	%rdi, -32(%rbp)
	movq	%rsi, -40(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$8, %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	%rdi, -80(%rbp)
	movq	-40(%rbp), %rdx
	movq	%rax, %rdi
	movq	%rsi, -112(%rbp)        ## 8-byte Spill
	callq	__ZN4arrrplINS_16arithmetic_arrayIfLm0EEENSt3__15tupleIJNS_7mul_tagEdRKS2_EEEEENS3_9enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS4_IJNS_7add_tagENS_10store_typeISA_E4typeENSD_ISB_E4typeEEEEE4typeERKSA_RKSB_
	leaq	-72(%rbp), %rdi
	leaq	-80(%rbp), %rsi
	leaq	-104(%rbp), %rdx
	callq	__ZN4arrr5storeIPfNSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS3_IJNS_7mul_tagEdS8_EEEEEEEENS3_IJNS_9store_tagENS_10store_typeIT_E4typeENSD_IT0_E4typeEEEERKSE_RKSH_
	leaq	-72(%rbp), %rax
	movq	-112(%rbp), %rdx        ## 8-byte Reload
	movq	(%rdx), %rdi
	movq	(%rax), %rsi
	movq	%rsi, (%rsp)
	movq	8(%rax), %rsi
	movq	%rsi, 8(%rsp)
	movq	16(%rax), %rsi
	movq	%rsi, 16(%rsp)
	movq	24(%rax), %rax
	movq	%rax, 24(%rsp)
	callq	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS6_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS6_IJNS_7mul_tagEdSD_EEEEEEEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESJ_m
	movq	-112(%rbp), %rax        ## 8-byte Reload
	addq	$144, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.p2align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi15:
	.cfi_def_cfa_offset 16
Lcfi16:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi17:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__111char_traitsIcE6lengthEPKc
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EEixEm
	.weak_definition	__ZN4arrr16arithmetic_arrayIfLm0EEixEm
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EEixEm: ## @_ZN4arrr16arithmetic_arrayIfLm0EEixEm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi18:
	.cfi_def_cfa_offset 16
Lcfi19:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi20:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	addq	$8, %rsi
	movq	-48(%rbp), %rdi
	movq	%rsi, -24(%rbp)
	movq	%rdi, -32(%rbp)
	movq	-24(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-32(%rbp), %rdi
	shlq	$2, %rdi
	addq	%rdi, %rsi
	movq	%rsi, %rax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	.weak_def_can_be_hidden	__ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EED1Ev: ## @_ZN4arrr16arithmetic_arrayIfLm0EED1Ev
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi21:
	.cfi_def_cfa_offset 16
Lcfi22:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi23:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZN4arrr16arithmetic_arrayIfLm0EED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EED2Ev
	.weak_def_can_be_hidden	__ZN4arrr16arithmetic_arrayIfLm0EED2Ev
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EED2Ev: ## @_ZN4arrr16arithmetic_arrayIfLm0EED2Ev
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## BB#0:
	pushq	%rbp
Lcfi24:
	.cfi_def_cfa_offset 16
Lcfi25:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi26:
	.cfi_def_cfa_register %rbp
	subq	$112, %rsp
	movq	%rdi, -96(%rbp)
	movq	-96(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -88(%rbp)
	movq	-88(%rbp), %rdi
	movq	%rdi, -80(%rbp)
	movq	-80(%rbp), %rdi
	movq	%rdi, -56(%rbp)
	movq	$0, -64(%rbp)
	movq	-56(%rbp), %rdi
	movq	%rdi, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -72(%rbp)
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	$0, (%rax)
	cmpq	$0, -72(%rbp)
	movq	%rdi, -104(%rbp)        ## 8-byte Spill
	je	LBB8_4
## BB#1:
	movq	-104(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	%rcx, -8(%rbp)
	movq	-8(%rbp), %rcx
	movq	8(%rcx), %rcx
	movq	-72(%rbp), %rdi
Ltmp18:
	callq	*%rcx
Ltmp19:
	jmp	LBB8_2
LBB8_2:
	jmp	LBB8_4
LBB8_3:
Ltmp20:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -108(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB8_4:
	addq	$112, %rsp
	popq	%rbp
	retq
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table8:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.byte	21                      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	13                      ## Call site table length
Lset10 = Ltmp18-Lfunc_begin1            ## >> Call Site 1 <<
	.long	Lset10
Lset11 = Ltmp19-Ltmp18                  ##   Call between Ltmp18 and Ltmp19
	.long	Lset11
Lset12 = Ltmp20-Lfunc_begin1            ##     jumps to Ltmp20
	.long	Lset12
	.byte	1                       ##   On action: 1
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	___clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## BB#0:
	pushq	%rax
	callq	___cxa_begin_catch
	movq	%rax, (%rsp)            ## 8-byte Spill
	callq	__ZSt9terminatev

	.globl	__ZN4arrr16arithmetic_arrayIfLm0EEC2Emf
	.weak_def_can_be_hidden	__ZN4arrr16arithmetic_arrayIfLm0EEC2Emf
	.p2align	4, 0x90
__ZN4arrr16arithmetic_arrayIfLm0EEC2Emf: ## @_ZN4arrr16arithmetic_arrayIfLm0EEC2Emf
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi27:
	.cfi_def_cfa_offset 16
Lcfi28:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi29:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$600, %rsp              ## imm = 0x258
Lcfi30:
	.cfi_offset %rbx, -56
Lcfi31:
	.cfi_offset %r12, -48
Lcfi32:
	.cfi_offset %r13, -40
Lcfi33:
	.cfi_offset %r14, -32
Lcfi34:
	.cfi_offset %r15, -24
	movq	%rdi, -512(%rbp)
	movq	%rsi, -520(%rbp)
	vmovss	%xmm0, -524(%rbp)
	movq	-512(%rbp), %rsi
	movq	-520(%rbp), %rdi
	movq	%rdi, (%rsi)
	movq	%rsi, %rdi
	addq	$8, %rdi
	movq	(%rsi), %rax
	shlq	$2, %rax
	movq	%rax, -488(%rbp)
	movq	$32, -496(%rbp)
	cmpq	$1, -496(%rbp)
	movq	%rsi, -568(%rbp)        ## 8-byte Spill
	movq	%rdi, -576(%rbp)        ## 8-byte Spill
	jne	LBB10_2
## BB#1:
	movq	-488(%rbp), %rdi
	callq	_malloc
	movq	%rax, -480(%rbp)
	jmp	LBB10_8
LBB10_2:
	movq	-496(%rbp), %rax
	movq	-496(%rbp), %rcx
	subq	$1, %rcx
	andq	%rcx, %rax
	cmpq	$0, %rax
	jne	LBB10_5
## BB#3:
	cmpq	$8, -496(%rbp)
	jae	LBB10_5
## BB#4:
	movq	$8, -496(%rbp)
LBB10_5:
	leaq	-504(%rbp), %rdi
	movq	-496(%rbp), %rsi
	movq	-488(%rbp), %rdx
	callq	_posix_memalign
	cmpl	$0, %eax
	je	LBB10_7
## BB#6:
	movq	$0, -480(%rbp)
	jmp	LBB10_8
LBB10_7:
	movq	-504(%rbp), %rax
	movq	%rax, -480(%rbp)
LBB10_8:
	leaq	-524(%rbp), %rax
	leaq	-344(%rbp), %rcx
	leaq	-336(%rbp), %rdx
	leaq	-376(%rbp), %rsi
	leaq	-368(%rbp), %rdi
	leaq	-536(%rbp), %r8
	xorl	%r9d, %r9d
	movl	$4, %r10d
	movl	%r10d, %r11d
	leaq	-544(%rbp), %rbx
	leaq	__ZN4arrrL8_mm_freeEPv(%rip), %r14
	movq	-480(%rbp), %r15
	movq	%r14, -536(%rbp)
	movq	%rdi, -584(%rbp)        ## 8-byte Spill
	movq	%rbx, %rdi
	movq	%rsi, -592(%rbp)        ## 8-byte Spill
	movl	%r9d, %esi
	movq	%rdx, -600(%rbp)        ## 8-byte Spill
	movq	%r11, %rdx
	movq	%rax, -608(%rbp)        ## 8-byte Spill
	movq	%rcx, -616(%rbp)        ## 8-byte Spill
	movq	%r15, -624(%rbp)        ## 8-byte Spill
	movq	%r8, -632(%rbp)         ## 8-byte Spill
	callq	_memset
	movl	-544(%rbp), %esi
	movl	%esi, -448(%rbp)
	movq	-576(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -456(%rbp)
	movq	-624(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -464(%rbp)
	movq	-632(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -472(%rbp)
	movq	-456(%rbp), %rdi
	movq	-464(%rbp), %r8
	movq	-472(%rbp), %r11
	movl	-448(%rbp), %esi
	movl	%esi, -416(%rbp)
	movq	%rdi, -424(%rbp)
	movq	%r8, -432(%rbp)
	movq	%r11, -440(%rbp)
	movq	-424(%rbp), %rdi
	movq	-432(%rbp), %r8
	movq	-440(%rbp), %r11
	movq	%r11, -408(%rbp)
	movq	-408(%rbp), %r11
	movq	(%r11), %r11
	movq	%rdi, -384(%rbp)
	movq	%r8, -392(%rbp)
	movq	%r11, -400(%rbp)
	movq	-384(%rbp), %rdi
	movq	-392(%rbp), %r8
	movq	-400(%rbp), %r11
	movq	%rdi, -360(%rbp)
	movq	%r8, -368(%rbp)
	movq	%r11, -376(%rbp)
	movq	-360(%rbp), %rdi
	movq	-584(%rbp), %r8         ## 8-byte Reload
	movq	%r8, -352(%rbp)
	movq	-352(%rbp), %r11
	movq	(%r11), %r11
	movq	-592(%rbp), %rbx        ## 8-byte Reload
	movq	%rbx, -304(%rbp)
	movq	-304(%rbp), %r14
	movq	(%r14), %r14
	movq	%rdi, -328(%rbp)
	movq	%r11, -336(%rbp)
	movq	%r14, -344(%rbp)
	movq	-328(%rbp), %rdi
	movq	-600(%rbp), %r11        ## 8-byte Reload
	movq	%r11, -320(%rbp)
	movq	-320(%rbp), %r14
	movq	(%r14), %r14
	movq	%r14, (%rdi)
	movq	-616(%rbp), %r14        ## 8-byte Reload
	movq	%r14, -312(%rbp)
	movq	-312(%rbp), %r15
	movq	(%r15), %r15
	movq	%r15, 8(%rdi)
	movq	-568(%rbp), %rdi        ## 8-byte Reload
	addq	$8, %rdi
	movq	%rdi, -296(%rbp)
	movq	-296(%rbp), %rdi
	movq	%rdi, -288(%rbp)
	movq	-288(%rbp), %rdi
	movq	%rdi, -280(%rbp)
	movq	-280(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	-568(%rbp), %r15        ## 8-byte Reload
	addq	$8, %r15
	movq	%r15, -184(%rbp)
	movq	-184(%rbp), %r15
	movq	%r15, -176(%rbp)
	movq	-176(%rbp), %r15
	movq	%r15, -168(%rbp)
	movq	-168(%rbp), %r15
	movq	(%r15), %r15
	movq	-568(%rbp), %r12        ## 8-byte Reload
	movq	(%r12), %r13
	shlq	$2, %r13
	addq	%r13, %r15
	movq	%rdi, -136(%rbp)
	movq	%r15, -144(%rbp)
	movq	-608(%rbp), %rdi        ## 8-byte Reload
	movq	%rdi, -152(%rbp)
	movq	-136(%rbp), %r15
	movq	-144(%rbp), %r13
	movq	-152(%rbp), %rax
	movq	%r15, -112(%rbp)
	movq	%r13, -120(%rbp)
	movq	%rax, -128(%rbp)
	movq	-112(%rbp), %rax
	movq	-120(%rbp), %r15
	movq	-112(%rbp), %r13
	subq	%r13, %r15
	sarq	$2, %r15
	movq	-128(%rbp), %r13
	movq	%rax, -80(%rbp)
	movq	%r15, -88(%rbp)
	movq	%r13, -96(%rbp)
	movq	-80(%rbp), %rax
	movq	-88(%rbp), %r15
	movq	%r15, -72(%rbp)
	movq	-72(%rbp), %r15
	movq	-96(%rbp), %r13
	movq	%rax, -48(%rbp)
	movq	%r15, -56(%rbp)
	movq	%r13, -64(%rbp)
LBB10_9:                                ## =>This Inner Loop Header: Depth=1
	cmpq	$0, -56(%rbp)
	jle	LBB10_11
## BB#10:                               ##   in Loop: Header=BB10_9 Depth=1
	movq	-64(%rbp), %rax
	vmovss	(%rax), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	movq	-48(%rbp), %rax
	vmovss	%xmm0, (%rax)
	movq	-48(%rbp), %rax
	addq	$4, %rax
	movq	%rax, -48(%rbp)
	movq	-56(%rbp), %rax
	addq	$-1, %rax
	movq	%rax, -56(%rbp)
	jmp	LBB10_9
LBB10_11:
## BB#12:
	addq	$600, %rsp              ## imm = 0x258
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
	.cfi_endproc

	.p2align	4, 0x90
__ZN4arrrL8_mm_freeEPv:                 ## @_ZN4arrrL8_mm_freeEPv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi35:
	.cfi_def_cfa_offset 16
Lcfi36:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi37:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_free
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESB_m
	.weak_definition	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESB_m
	.p2align	4, 0x90
__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESB_m: ## @_ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESB_m
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi38:
	.cfi_def_cfa_offset 16
Lcfi39:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi40:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -16(%rbp)
	vmovss	%xmm0, -8(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	%rsi, -40(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rsi
	movq	-40(%rbp), %rdi
	vmovss	-32(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr4loopILi15EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEEvT1_m
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr5storeIPffEENSt3__15tupleIJNS_9store_tagENS_10store_typeIT_E4typeENS5_IT0_E4typeEEEERKS6_RKS9_
	.weak_definition	__ZN4arrr5storeIPffEENSt3__15tupleIJNS_9store_tagENS_10store_typeIT_E4typeENS5_IT0_E4typeEEEERKS6_RKS9_
	.p2align	4, 0x90
__ZN4arrr5storeIPffEENSt3__15tupleIJNS_9store_tagENS_10store_typeIT_E4typeENS5_IT0_E4typeEEEERKS6_RKS9_: ## @_ZN4arrr5storeIPffEENSt3__15tupleIJNS_9store_tagENS_10store_typeIT_E4typeENS5_IT0_E4typeEEEERKS6_RKS9_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi41:
	.cfi_def_cfa_offset 16
Lcfi42:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi43:
	.cfi_def_cfa_register %rbp
	subq	$256, %rsp              ## imm = 0x100
	movq	%rdi, -368(%rbp)
	movq	%rsi, -376(%rbp)
	movq	-368(%rbp), %rsi
	movq	-376(%rbp), %rdi
	leaq	-360(%rbp), %rax
	movq	%rax, -320(%rbp)
	leaq	-384(%rbp), %rax
	movq	%rax, -328(%rbp)
	movq	%rsi, -336(%rbp)
	movq	%rdi, -344(%rbp)
	movq	-320(%rbp), %rax
	movq	-328(%rbp), %rsi
	movq	-336(%rbp), %rdi
	movq	-344(%rbp), %rcx
	movq	%rax, -256(%rbp)
	movq	%rsi, -264(%rbp)
	movq	%rdi, -272(%rbp)
	movq	%rcx, -280(%rbp)
	movq	-256(%rbp), %rax
	movq	-264(%rbp), %rcx
	movq	%rcx, -248(%rbp)
	movq	-248(%rbp), %rcx
	movq	-272(%rbp), %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-280(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rax, -216(%rbp)
	movq	%rcx, -224(%rbp)
	movq	%rsi, -232(%rbp)
	movq	%rdi, -240(%rbp)
	movq	-216(%rbp), %rax
	movq	-224(%rbp), %rcx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdi
	movq	%rax, -152(%rbp)
	movq	%rcx, -160(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdi, -176(%rbp)
	movq	-152(%rbp), %rax
	movq	-160(%rbp), %rcx
	movq	%rcx, -112(%rbp)
	movq	-112(%rbp), %rcx
	movq	%rax, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	%rcx, -24(%rbp)
	movq	-168(%rbp), %rcx
	movq	%rcx, -48(%rbp)
	movq	-48(%rbp), %rcx
	movq	%rax, -64(%rbp)
	movq	%rcx, -72(%rbp)
	movq	-64(%rbp), %rcx
	movq	-72(%rbp), %rsi
	movq	%rsi, -56(%rbp)
	movq	-56(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rsi, (%rcx)
	addq	$8, %rax
	movq	-176(%rbp), %rcx
	movq	%rcx, -80(%rbp)
	movq	-80(%rbp), %rcx
	movq	%rax, -96(%rbp)
	movq	%rcx, -104(%rbp)
	movq	-96(%rbp), %rax
	movq	-104(%rbp), %rcx
	movq	%rcx, -88(%rbp)
	movq	-88(%rbp), %rcx
	vmovss	(%rcx), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	vmovss	%xmm0, (%rax)
	movq	-360(%rbp), %rax
	vmovss	-352(%rbp), %xmm0       ## xmm0 = mem[0],zero,zero,zero
	addq	$256, %rsp              ## imm = 0x100
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr4loopILi15EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEEvT1_m
	.weak_definition	__ZN4arrr4loopILi15EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEEvT1_m
	.p2align	4, 0x90
__ZN4arrr4loopILi15EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEEvT1_m: ## @_ZN4arrr4loopILi15EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPffEEEEEvT1_m
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi44:
	.cfi_def_cfa_offset 16
Lcfi45:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi46:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$2112, %rsp             ## imm = 0x840
	leaq	1952(%rsp), %rax
	leaq	2080(%rsp), %rcx
	movq	%rdi, 2080(%rsp)
	vmovss	%xmm0, 2088(%rsp)
	movq	%rsi, 2072(%rsp)
	movq	$0, 2064(%rsp)
	movq	%rax, %rdi
	movq	%rcx, %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	movq	2072(%rsp), %rax
	andq	$-128, %rax
	movq	%rax, 1272(%rsp)
LBB14_1:                                ## =>This Inner Loop Header: Depth=1
	movq	2064(%rsp), %rax
	cmpq	1272(%rsp), %rax
	jae	LBB14_4
## BB#2:                                ##   in Loop: Header=BB14_1 Depth=1
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1264(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1264(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1256(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1256(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1248(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1248(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1240(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1240(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1232(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1232(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1224(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1224(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1216(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1216(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1208(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1208(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1200(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1200(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1192(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1192(%rsp)
	vmovaps	%ymm0, 672(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1184(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1184(%rsp)
	vmovaps	%ymm0, 640(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1176(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1176(%rsp)
	vmovaps	%ymm0, 608(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1168(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1168(%rsp)
	vmovaps	%ymm0, 576(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1160(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1160(%rsp)
	vmovaps	%ymm0, 544(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1152(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1152(%rsp)
	vmovaps	%ymm0, 512(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1144(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1144(%rsp)
	vmovaps	%ymm0, 480(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1136(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1136(%rsp)
	vmovaps	%ymm0, 448(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1128(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1128(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1120(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1120(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1112(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1112(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1104(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1104(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1096(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1096(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1088(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1088(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1080(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1080(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1072(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 1072(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1064(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 1064(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1056(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 1056(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1048(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 1048(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1040(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 1040(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1032(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 1032(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1024(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 1024(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1016(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 1016(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1008(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 1008(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	1000(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 1000(%rsp)
	vmovaps	%ymm0, 416(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	992(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 992(%rsp)
	vmovaps	%ymm0, 384(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	984(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 984(%rsp)
	vmovaps	%ymm0, 352(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	976(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 976(%rsp)
	vmovaps	%ymm0, 320(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	968(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 968(%rsp)
	vmovaps	%ymm0, 288(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	960(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 960(%rsp)
	vmovaps	%ymm0, 256(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	952(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 952(%rsp)
	vmovaps	%ymm0, 224(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	944(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 944(%rsp)
	vmovaps	%ymm0, 192(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	936(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 936(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	928(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 928(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	920(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 920(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1568(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	912(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 912(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1472(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	904(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 904(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1376(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	896(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 896(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1280(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	888(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 888(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
## BB#3:                                ##   in Loop: Header=BB14_1 Depth=1
	movq	2064(%rsp), %rax
	addq	$128, %rax
	movq	%rax, 2064(%rsp)
	jmp	LBB14_1
LBB14_4:
	movq	2072(%rsp), %rax
	andq	$-32, %rax
	movq	%rax, 880(%rsp)
LBB14_5:                                ## =>This Inner Loop Header: Depth=1
	movq	2064(%rsp), %rax
	cmpq	880(%rsp), %rax
	jae	LBB14_8
## BB#6:                                ##   in Loop: Header=BB14_5 Depth=1
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	872(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 872(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	864(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 864(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	856(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 856(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	848(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 848(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	840(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 840(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	832(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 832(%rsp)
	vmovaps	%ymm0, 160(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	824(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 824(%rsp)
	vmovaps	%ymm0, 128(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	816(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 816(%rsp)
	vmovaps	%ymm0, 96(%rsp)         ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	808(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 808(%rsp)
	vmovaps	%ymm0, 64(%rsp)         ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1856(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	800(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 800(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1760(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	792(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 792(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	leaq	1664(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	784(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 784(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
## BB#7:                                ##   in Loop: Header=BB14_5 Depth=1
	movq	2064(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 2064(%rsp)
	jmp	LBB14_5
LBB14_8:
	movq	2072(%rsp), %rax
	andq	$-8, %rax
	movq	%rax, 776(%rsp)
LBB14_9:                                ## =>This Inner Loop Header: Depth=1
	movq	2064(%rsp), %rax
	cmpq	776(%rsp), %rax
	jae	LBB14_12
## BB#10:                               ##   in Loop: Header=BB14_9 Depth=1
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	768(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 768(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	760(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 760(%rsp)
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	leaq	1952(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	752(%rsp), %rdx
	movq	2064(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 752(%rsp)
	vmovaps	%ymm0, 32(%rsp)         ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
## BB#11:                               ##   in Loop: Header=BB14_9 Depth=1
	movq	2064(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 2064(%rsp)
	jmp	LBB14_9
LBB14_12:
	leaq	728(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE7prepareERKS5_
LBB14_13:                               ## =>This Inner Loop Header: Depth=1
	movq	2064(%rsp), %rax
	cmpq	2072(%rsp), %rax
	jae	LBB14_16
## BB#14:                               ##   in Loop: Header=BB14_13 Depth=1
	leaq	728(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	2064(%rsp), %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE4loadERKS5_RKm
	leaq	728(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	2064(%rsp), %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEEclERKS5_RKm
	leaq	728(%rsp), %rdi
	leaq	2080(%rsp), %rsi
	leaq	2064(%rsp), %rdx
	vmovss	%xmm0, 28(%rsp)         ## 4-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE5storeERKS5_RKm
## BB#15:                               ##   in Loop: Header=BB14_13 Depth=1
	movq	2064(%rsp), %rax
	addq	$1, %rax
	movq	%rax, 2064(%rsp)
	jmp	LBB14_13
LBB14_16:
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE7prepareERKS5_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi47:
	.cfi_def_cfa_offset 16
Lcfi48:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi49:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$64, %rdi
	movq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rsi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE7prepareERKf
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 32(%rsi)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE4loadERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi50:
	.cfi_def_cfa_offset 16
Lcfi51:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi52:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	addq	$64, %rdx
	movq	-32(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-40(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-48(%rbp), %rdx         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE4loadERKfRKm
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEEclERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi53:
	.cfi_def_cfa_offset 16
Lcfi54:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi55:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$64, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEEclERKfRKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	vmovups	%ymm0, (%rax)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22vector_instruction_setIfEEE5storeERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi56:
	.cfi_def_cfa_offset 16
Lcfi57:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi58:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$128, %rsp
	movq	%rdi, 88(%rsp)
	movq	%rsi, 80(%rsp)
	movq	%rdx, 72(%rsp)
	movq	88(%rsp), %rdx
	movq	%rdx, %rsi
	addq	$64, %rsi
	movq	80(%rsp), %rdi
	movq	%rdi, 96(%rsp)
	movq	96(%rsp), %rdi
	addq	$8, %rdi
	movq	%rdi, 104(%rsp)
	movq	104(%rsp), %rdi
	movq	72(%rsp), %rax
	movq	%rdi, 64(%rsp)          ## 8-byte Spill
	movq	%rsi, %rdi
	movq	64(%rsp), %rsi          ## 8-byte Reload
	movq	%rdx, 56(%rsp)          ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE5storeERKfRKm
	movq	56(%rsp), %rax          ## 8-byte Reload
	movq	32(%rax), %rdi
	movq	72(%rsp), %rdx
	movq	(%rdx), %rsi
	vmovups	(%rax), %ymm0
	callq	__ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f
	vmovaps	%ymm0, (%rsp)           ## 32-byte Spill
	movq	%rbp, %rsp
	popq	%rbp
	vzeroupper
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE7prepareERKS5_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE7prepareERKS5_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE7prepareERKS5_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE7prepareERKS5_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi59:
	.cfi_def_cfa_offset 16
Lcfi60:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi61:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$16, %rdi
	movq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rsi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE7prepareERKf
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 8(%rsi)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE4loadERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE4loadERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE4loadERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE4loadERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi62:
	.cfi_def_cfa_offset 16
Lcfi63:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi64:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	addq	$16, %rdx
	movq	-32(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-40(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-48(%rbp), %rdx         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE4loadERKfRKm
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEEclERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEEclERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEEclERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEEclERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi65:
	.cfi_def_cfa_offset 16
Lcfi66:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi67:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$16, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEEclERKfRKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	vmovss	%xmm0, (%rax)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE5storeERKS5_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE5storeERKS5_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE5storeERKS5_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPffEEEmNS_22scalar_instruction_setIfEEE5storeERKS5_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi68:
	.cfi_def_cfa_offset 16
Lcfi69:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi70:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$16, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE5storeERKfRKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	8(%rax), %rdi
	movq	-40(%rbp), %rdx
	movq	(%rdx), %rsi
	vmovss	(%rax), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE5storeEPfmf
	vmovss	%xmm0, -60(%rbp)        ## 4-byte Spill
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE7prepareERKf
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE7prepareERKf
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE7prepareERKf: ## @_ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE7prepareERKf
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi71:
	.cfi_def_cfa_offset 16
Lcfi72:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi73:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovss	(%rdi), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22vector_instruction_setIfE3setIfEEDv8_fT_
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	vmovups	%ymm0, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	vzeroupper
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE3setIfEEDv8_fT_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE3setIfEEDv8_fT_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE3setIfEEDv8_fT_: ## @_ZN4arrr22vector_instruction_setIfE3setIfEEDv8_fT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi74:
	.cfi_def_cfa_offset 16
Lcfi75:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi76:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$96, %rsp
	vmovss	%xmm0, 28(%rsp)
	vmovss	28(%rsp), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	vmovss	%xmm0, 76(%rsp)
	vbroadcastss	76(%rsp), %ymm1
	vmovaps	%ymm1, 32(%rsp)
	vmovaps	32(%rsp), %ymm0
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE4loadERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE4loadERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE4loadERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE4loadERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi77:
	.cfi_def_cfa_offset 16
Lcfi78:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi79:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEEclERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEEclERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEEclERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEEclERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi80:
	.cfi_def_cfa_offset 16
Lcfi81:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi82:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovups	(%rdx), %ymm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE5storeERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE5storeERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE5storeERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22vector_instruction_setIfEEE5storeERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi83:
	.cfi_def_cfa_offset 16
Lcfi84:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi85:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f
	.weak_definition	__ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f: ## @_ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi86:
	.cfi_def_cfa_offset 16
Lcfi87:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi88:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$128, %rsp
	movq	%rdi, 56(%rsp)
	movq	%rsi, 48(%rsp)
	vmovaps	%ymm0, (%rsp)
	movq	56(%rsp), %rsi
	movq	48(%rsp), %rdi
	shlq	$2, %rdi
	addq	%rdi, %rsi
	vmovaps	(%rsp), %ymm0
	movq	%rsi, 104(%rsp)
	vmovaps	%ymm0, 64(%rsp)
	vmovaps	64(%rsp), %ymm0
	movq	104(%rsp), %rsi
	vmovups	%ymm0, (%rsi)
	vmovaps	(%rsp), %ymm0
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE7prepareERKf
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE7prepareERKf
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE7prepareERKf: ## @_ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE7prepareERKf
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi89:
	.cfi_def_cfa_offset 16
Lcfi90:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi91:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovss	(%rdi), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22scalar_instruction_setIfE3setIfEEfT_
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	vmovss	%xmm0, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE3setIfEEfT_
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE3setIfEEfT_
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE3setIfEEfT_: ## @_ZN4arrr22scalar_instruction_setIfE3setIfEEfT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi92:
	.cfi_def_cfa_offset 16
Lcfi93:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi94:
	.cfi_def_cfa_register %rbp
	vmovss	%xmm0, -4(%rbp)
	vmovss	-4(%rbp), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE4loadERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE4loadERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE4loadERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE4loadERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi95:
	.cfi_def_cfa_offset 16
Lcfi96:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi97:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEEclERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEEclERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEEclERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEEclERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi98:
	.cfi_def_cfa_offset 16
Lcfi99:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi100:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovss	(%rdx), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE5storeERKfRKm
	.weak_definition	__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE5storeERKfRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE5storeERKfRKm: ## @_ZN4arrr12array_eval_tIfmNS_22scalar_instruction_setIfEEE5storeERKfRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi101:
	.cfi_def_cfa_offset 16
Lcfi102:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi103:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE5storeEPfmf
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE5storeEPfmf
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE5storeEPfmf: ## @_ZN4arrr22scalar_instruction_setIfE5storeEPfmf
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi104:
	.cfi_def_cfa_offset 16
Lcfi105:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi106:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	vmovss	%xmm0, -20(%rbp)
	vmovss	-20(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovss	%xmm0, (%rsi,%rdi,4)
	vmovss	-20(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS6_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS6_IJNS_7mul_tagEdSD_EEEEEEEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESJ_m
	.weak_definition	__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS6_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS6_IJNS_7mul_tagEdSD_EEEEEEEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESJ_m
	.p2align	4, 0x90
__ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS6_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS6_IJNS_7mul_tagEdSD_EEEEEEEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESJ_m: ## @_ZN4arrr7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS6_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS6_IJNS_7mul_tagEdSD_EEEEEEEEEEENS5_9enable_ifIXsr7is_nodeIT1_EE5valueEvE4typeESJ_m
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi107:
	.cfi_def_cfa_offset 16
Lcfi108:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi109:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	16(%rbp), %rax
	leaq	-40(%rbp), %rcx
	movq	%rdi, -8(%rbp)
	movq	(%rax), %rdi
	movq	%rdi, -40(%rbp)
	movq	8(%rax), %rdi
	movq	%rdi, -32(%rbp)
	movq	16(%rax), %rdi
	movq	%rdi, -24(%rbp)
	movq	24(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rcx), %rax
	movq	%rax, (%rsp)
	movq	8(%rcx), %rax
	movq	%rax, 8(%rsp)
	movq	16(%rcx), %rax
	movq	%rax, 16(%rsp)
	movq	24(%rcx), %rax
	movq	%rax, 24(%rsp)
	callq	__ZN4arrr4loopILi7EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS8_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS8_IJNS_7mul_tagEdSF_EEEEEEEEEEEvT1_m
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr5storeIPfNSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS3_IJNS_7mul_tagEdS8_EEEEEEEENS3_IJNS_9store_tagENS_10store_typeIT_E4typeENSD_IT0_E4typeEEEERKSE_RKSH_
	.weak_definition	__ZN4arrr5storeIPfNSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS3_IJNS_7mul_tagEdS8_EEEEEEEENS3_IJNS_9store_tagENS_10store_typeIT_E4typeENSD_IT0_E4typeEEEERKSE_RKSH_
	.p2align	4, 0x90
__ZN4arrr5storeIPfNSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS3_IJNS_7mul_tagEdS8_EEEEEEEENS3_IJNS_9store_tagENS_10store_typeIT_E4typeENSD_IT0_E4typeEEEERKSE_RKSH_: ## @_ZN4arrr5storeIPfNSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS3_IJNS_7mul_tagEdS8_EEEEEEEENS3_IJNS_9store_tagENS_10store_typeIT_E4typeENSD_IT0_E4typeEEEERKSE_RKSH_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi110:
	.cfi_def_cfa_offset 16
Lcfi111:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi112:
	.cfi_def_cfa_register %rbp
	subq	$240, %rsp
	movq	%rdi, %rax
	leaq	-368(%rbp), %rcx
	movq	%rsi, -352(%rbp)
	movq	%rdx, -360(%rbp)
	movq	-352(%rbp), %rdx
	movq	-360(%rbp), %rsi
	movq	%rdi, -320(%rbp)
	movq	%rcx, -328(%rbp)
	movq	%rdx, -336(%rbp)
	movq	%rsi, -344(%rbp)
	movq	-320(%rbp), %rcx
	movq	-328(%rbp), %rdx
	movq	-336(%rbp), %rsi
	movq	-344(%rbp), %rdi
	movq	%rcx, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	%rsi, -272(%rbp)
	movq	%rdi, -280(%rbp)
	movq	-256(%rbp), %rcx
	movq	-264(%rbp), %rdx
	movq	%rdx, -248(%rbp)
	movq	-248(%rbp), %rdx
	movq	-272(%rbp), %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-280(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rcx, -216(%rbp)
	movq	%rdx, -224(%rbp)
	movq	%rsi, -232(%rbp)
	movq	%rdi, -240(%rbp)
	movq	-216(%rbp), %rcx
	movq	-224(%rbp), %rdx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdi
	movq	%rcx, -152(%rbp)
	movq	%rdx, -160(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdi, -176(%rbp)
	movq	-152(%rbp), %rcx
	movq	%rcx, %rdx
	movq	-160(%rbp), %rsi
	movq	%rsi, -112(%rbp)
	movq	-112(%rbp), %rsi
	movq	%rdx, -32(%rbp)
	movq	%rsi, -40(%rbp)
	movq	-40(%rbp), %rdx
	movq	%rdx, -24(%rbp)
	movq	%rcx, %rdx
	movq	-168(%rbp), %rsi
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rsi
	movq	%rdx, -64(%rbp)
	movq	%rsi, -72(%rbp)
	movq	-64(%rbp), %rdx
	movq	-72(%rbp), %rsi
	movq	%rsi, -56(%rbp)
	movq	-56(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rsi, (%rdx)
	addq	$8, %rcx
	movq	-176(%rbp), %rdx
	movq	%rdx, -80(%rbp)
	movq	-80(%rbp), %rdx
	movq	%rcx, -96(%rbp)
	movq	%rdx, -104(%rbp)
	movq	-96(%rbp), %rcx
	movq	-104(%rbp), %rdx
	movq	%rdx, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	%rsi, (%rcx)
	movq	8(%rdx), %rsi
	movq	%rsi, 8(%rcx)
	movq	16(%rdx), %rdx
	movq	%rdx, 16(%rcx)
	addq	$240, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrrplINS_16arithmetic_arrayIfLm0EEENSt3__15tupleIJNS_7mul_tagEdRKS2_EEEEENS3_9enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS4_IJNS_7add_tagENS_10store_typeISA_E4typeENSD_ISB_E4typeEEEEE4typeERKSA_RKSB_
	.weak_definition	__ZN4arrrplINS_16arithmetic_arrayIfLm0EEENSt3__15tupleIJNS_7mul_tagEdRKS2_EEEEENS3_9enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS4_IJNS_7add_tagENS_10store_typeISA_E4typeENSD_ISB_E4typeEEEEE4typeERKSA_RKSB_
	.p2align	4, 0x90
__ZN4arrrplINS_16arithmetic_arrayIfLm0EEENSt3__15tupleIJNS_7mul_tagEdRKS2_EEEEENS3_9enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS4_IJNS_7add_tagENS_10store_typeISA_E4typeENSD_ISB_E4typeEEEEE4typeERKSA_RKSB_: ## @_ZN4arrrplINS_16arithmetic_arrayIfLm0EEENSt3__15tupleIJNS_7mul_tagEdRKS2_EEEEENS3_9enable_ifIXoosr7is_nodeIT_EE5valuesr7is_nodeIT0_EE5valueENS4_IJNS_7add_tagENS_10store_typeISA_E4typeENSD_ISB_E4typeEEEEE4typeERKSA_RKSB_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi113:
	.cfi_def_cfa_offset 16
Lcfi114:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi115:
	.cfi_def_cfa_register %rbp
	subq	$240, %rsp
	movq	%rdi, %rax
	leaq	-368(%rbp), %rcx
	movq	%rsi, -352(%rbp)
	movq	%rdx, -360(%rbp)
	movq	-352(%rbp), %rdx
	movq	-360(%rbp), %rsi
	movq	%rdi, -320(%rbp)
	movq	%rcx, -328(%rbp)
	movq	%rdx, -336(%rbp)
	movq	%rsi, -344(%rbp)
	movq	-320(%rbp), %rcx
	movq	-328(%rbp), %rdx
	movq	-336(%rbp), %rsi
	movq	-344(%rbp), %rdi
	movq	%rcx, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	%rsi, -272(%rbp)
	movq	%rdi, -280(%rbp)
	movq	-256(%rbp), %rcx
	movq	-264(%rbp), %rdx
	movq	%rdx, -248(%rbp)
	movq	-248(%rbp), %rdx
	movq	-272(%rbp), %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-280(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rcx, -216(%rbp)
	movq	%rdx, -224(%rbp)
	movq	%rsi, -232(%rbp)
	movq	%rdi, -240(%rbp)
	movq	-216(%rbp), %rcx
	movq	-224(%rbp), %rdx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdi
	movq	%rcx, -152(%rbp)
	movq	%rdx, -160(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdi, -176(%rbp)
	movq	-152(%rbp), %rcx
	movq	%rcx, %rdx
	movq	-160(%rbp), %rsi
	movq	%rsi, -112(%rbp)
	movq	-112(%rbp), %rsi
	movq	%rdx, -32(%rbp)
	movq	%rsi, -40(%rbp)
	movq	-40(%rbp), %rdx
	movq	%rdx, -24(%rbp)
	movq	%rcx, %rdx
	movq	-168(%rbp), %rsi
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rsi
	movq	%rdx, -64(%rbp)
	movq	%rsi, -72(%rbp)
	movq	-64(%rbp), %rdx
	movq	-72(%rbp), %rsi
	movq	%rsi, -56(%rbp)
	movq	-56(%rbp), %rsi
	movq	%rsi, (%rdx)
	addq	$8, %rcx
	movq	-176(%rbp), %rdx
	movq	%rdx, -80(%rbp)
	movq	-80(%rbp), %rdx
	movq	%rcx, -96(%rbp)
	movq	%rdx, -104(%rbp)
	movq	-96(%rbp), %rcx
	movq	-104(%rbp), %rdx
	movq	%rdx, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	%rsi, (%rcx)
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rcx)
	addq	$240, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr4loopILi7EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS8_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS8_IJNS_7mul_tagEdSF_EEEEEEEEEEEvT1_m
	.weak_definition	__ZN4arrr4loopILi7EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS8_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS8_IJNS_7mul_tagEdSF_EEEEEEEEEEEvT1_m
	.p2align	4, 0x90
__ZN4arrr4loopILi7EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS8_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS8_IJNS_7mul_tagEdSF_EEEEEEEEEEEvT1_m: ## @_ZN4arrr4loopILi7EvE7executeINS_22vector_instruction_setIfEENS_22scalar_instruction_setIfEENSt3__15tupleIJNS_9store_tagEPfNS8_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS8_IJNS_7mul_tagEdSF_EEEEEEEEEEEvT1_m
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi116:
	.cfi_def_cfa_offset 16
Lcfi117:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi118:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$2240, %rsp             ## imm = 0x8C0
	leaq	16(%rbp), %rax
	leaq	1984(%rsp), %rcx
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, 2216(%rsp)
	movq	%rdi, 1304(%rsp)
	movq	$0, 1296(%rsp)
	movq	%rcx, %rdi
	movq	%rax, %rsi
	movq	%rax, 704(%rsp)         ## 8-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	leaq	1760(%rsp), %rdi
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	leaq	1536(%rsp), %rdi
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	leaq	1312(%rsp), %rdi
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	movq	1304(%rsp), %rax
	andq	$-128, %rax
	movq	%rax, 1288(%rsp)
LBB38_1:                                ## =>This Inner Loop Header: Depth=1
	movq	1296(%rsp), %rax
	cmpq	1288(%rsp), %rax
	jae	LBB38_4
## BB#2:                                ##   in Loop: Header=BB38_1 Depth=1
	leaq	1984(%rsp), %rdi
	leaq	1280(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1280(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1272(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1272(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1264(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1264(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1256(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1256(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1248(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1248(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1240(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1240(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 672(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1232(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1232(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 640(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1224(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1224(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 608(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1216(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 1216(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 576(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1208(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1208(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1200(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 1200(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1192(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 1192(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1184(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1184(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1176(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1176(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1168(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1168(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1160(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1160(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1152(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1152(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1144(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1144(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 544(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1136(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1136(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 512(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1128(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1128(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 480(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1120(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1120(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 448(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1112(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$40, %rax
	movq	%rax, 1112(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1104(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$48, %rax
	movq	%rax, 1104(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1096(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$56, %rax
	movq	%rax, 1096(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1088(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 1088(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1080(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 1080(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1072(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 1072(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1064(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 1064(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1056(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 1056(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1048(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 1048(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 416(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1040(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 1040(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 384(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1032(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 1032(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 352(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	1024(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$64, %rax
	movq	%rax, 1024(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 320(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	1016(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$72, %rax
	movq	%rax, 1016(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	1008(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$80, %rax
	movq	%rax, 1008(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	1000(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$88, %rax
	movq	%rax, 1000(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	992(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 992(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	984(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 984(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	976(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 976(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	968(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 968(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	960(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 960(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	952(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 952(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 288(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	944(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 944(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 256(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	936(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 936(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 224(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	928(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$96, %rax
	movq	%rax, 928(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 192(%rsp)        ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	920(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$104, %rax
	movq	%rax, 920(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	912(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$112, %rax
	movq	%rax, 912(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	904(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$120, %rax
	movq	%rax, 904(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
## BB#3:                                ##   in Loop: Header=BB38_1 Depth=1
	movq	1296(%rsp), %rax
	addq	$128, %rax
	movq	%rax, 1296(%rsp)
	jmp	LBB38_1
LBB38_4:
	movq	1304(%rsp), %rax
	andq	$-32, %rax
	movq	%rax, 896(%rsp)
LBB38_5:                                ## =>This Inner Loop Header: Depth=1
	movq	1296(%rsp), %rax
	cmpq	896(%rsp), %rax
	jae	LBB38_8
## BB#6:                                ##   in Loop: Header=BB38_5 Depth=1
	leaq	1984(%rsp), %rdi
	leaq	888(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 888(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	880(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 880(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	872(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 872(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	864(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 864(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	856(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 856(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	848(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 848(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 160(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	840(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 840(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 128(%rsp)        ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	832(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 832(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 96(%rsp)         ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	824(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 824(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 64(%rsp)         ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1760(%rsp), %rdi
	leaq	816(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 816(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1536(%rsp), %rdi
	leaq	808(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$16, %rax
	movq	%rax, 808(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	leaq	1312(%rsp), %rdi
	leaq	800(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$24, %rax
	movq	%rax, 800(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
## BB#7:                                ##   in Loop: Header=BB38_5 Depth=1
	movq	1296(%rsp), %rax
	addq	$32, %rax
	movq	%rax, 1296(%rsp)
	jmp	LBB38_5
LBB38_8:
	movq	1304(%rsp), %rax
	andq	$-8, %rax
	movq	%rax, 792(%rsp)
LBB38_9:                                ## =>This Inner Loop Header: Depth=1
	movq	1296(%rsp), %rax
	cmpq	792(%rsp), %rax
	jae	LBB38_12
## BB#10:                               ##   in Loop: Header=BB38_9 Depth=1
	leaq	1984(%rsp), %rdi
	leaq	784(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 784(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	776(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 776(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	leaq	1984(%rsp), %rdi
	leaq	768(%rsp), %rdx
	movq	1296(%rsp), %rax
	addq	$0, %rax
	movq	%rax, 768(%rsp)
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovaps	%ymm0, 32(%rsp)         ## 32-byte Spill
	vzeroupper
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
## BB#11:                               ##   in Loop: Header=BB38_9 Depth=1
	movq	1296(%rsp), %rax
	addq	$8, %rax
	movq	%rax, 1296(%rsp)
	jmp	LBB38_9
LBB38_12:
	leaq	712(%rsp), %rdi
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSD_
LBB38_13:                               ## =>This Inner Loop Header: Depth=1
	movq	1296(%rsp), %rax
	cmpq	1304(%rsp), %rax
	jae	LBB38_16
## BB#14:                               ##   in Loop: Header=BB38_13 Depth=1
	leaq	712(%rsp), %rdi
	leaq	1296(%rsp), %rdx
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSD_RKm
	leaq	712(%rsp), %rdi
	leaq	1296(%rsp), %rdx
	movq	704(%rsp), %rsi         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEEclERKSD_RKm
	leaq	712(%rsp), %rdi
	leaq	1296(%rsp), %rdx
	movq	704(%rsp), %rsi         ## 8-byte Reload
	vmovss	%xmm0, 28(%rsp)         ## 4-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSD_RKm
## BB#15:                               ##   in Loop: Header=BB38_13 Depth=1
	movq	1296(%rsp), %rax
	addq	$1, %rax
	movq	%rax, 1296(%rsp)
	jmp	LBB38_13
LBB38_16:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	2216(%rsp), %rcx
	cmpq	%rcx, %rax
	jne	LBB38_18
## BB#17:
	movq	%rbp, %rsp
	popq	%rbp
	retq
LBB38_18:
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSD_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi119:
	.cfi_def_cfa_offset 16
Lcfi120:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi121:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$64, %rdi
	movq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rsi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSA_
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 32(%rsi)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE4loadERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi122:
	.cfi_def_cfa_offset 16
Lcfi123:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi124:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	addq	$64, %rdx
	movq	-32(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-40(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-48(%rbp), %rdx         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE4loadERKSA_RKm
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEEclERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi125:
	.cfi_def_cfa_offset 16
Lcfi126:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi127:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$64, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEEclERKSA_RKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	vmovups	%ymm0, (%rax)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22vector_instruction_setIfEEE5storeERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi128:
	.cfi_def_cfa_offset 16
Lcfi129:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi130:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$128, %rsp
	movq	%rdi, 88(%rsp)
	movq	%rsi, 80(%rsp)
	movq	%rdx, 72(%rsp)
	movq	88(%rsp), %rdx
	movq	%rdx, %rsi
	addq	$64, %rsi
	movq	80(%rsp), %rdi
	movq	%rdi, 96(%rsp)
	movq	96(%rsp), %rdi
	addq	$8, %rdi
	movq	%rdi, 104(%rsp)
	movq	104(%rsp), %rdi
	movq	72(%rsp), %rax
	movq	%rdi, 64(%rsp)          ## 8-byte Spill
	movq	%rsi, %rdi
	movq	64(%rsp), %rsi          ## 8-byte Reload
	movq	%rdx, 56(%rsp)          ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE5storeERKSA_RKm
	movq	56(%rsp), %rax          ## 8-byte Reload
	movq	32(%rax), %rdi
	movq	72(%rsp), %rdx
	movq	(%rdx), %rsi
	vmovups	(%rax), %ymm0
	callq	__ZN4arrr22vector_instruction_setIfE5storeEPfmDv8_f
	vmovaps	%ymm0, (%rsp)           ## 32-byte Spill
	movq	%rbp, %rsp
	popq	%rbp
	vzeroupper
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSD_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSD_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSD_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSD_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi131:
	.cfi_def_cfa_offset 16
Lcfi132:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi133:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	%rsi, %rdi
	addq	$16, %rdi
	movq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rsi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSA_
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 8(%rsi)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi134:
	.cfi_def_cfa_offset 16
Lcfi135:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi136:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	addq	$16, %rdx
	movq	-32(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-40(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-48(%rbp), %rdx         ## 8-byte Reload
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSA_RKm
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEEclERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEEclERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEEclERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEEclERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi137:
	.cfi_def_cfa_offset 16
Lcfi138:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi139:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$16, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEEclERKSA_RKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	vmovss	%xmm0, (%rax)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSD_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSD_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSD_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_9store_tagEPfNS2_IJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS9_EEEEEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSD_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi140:
	.cfi_def_cfa_offset 16
Lcfi141:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi142:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	addq	$16, %rsi
	movq	-32(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-40(%rbp), %rax
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-48(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSA_RKm
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	8(%rax), %rdi
	movq	-40(%rbp), %rdx
	movq	(%rdx), %rsi
	vmovss	(%rax), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE5storeEPfmf
	vmovss	%xmm0, -60(%rbp)        ## 4-byte Spill
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSA_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSA_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSA_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKSA_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi143:
	.cfi_def_cfa_offset 16
Lcfi144:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi145:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	-48(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_
	movq	-64(%rbp), %rax         ## 8-byte Reload
	addq	$64, %rax
	movq	-48(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKS8_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi146:
	.cfi_def_cfa_offset 16
Lcfi147:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi148:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 32(%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKS8_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKS8_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKS8_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE7prepareERKS8_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi149:
	.cfi_def_cfa_offset 16
Lcfi150:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi151:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	-48(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE7prepareERKd
	movq	-64(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rax
	movq	-48(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE7prepareES4_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv
	.weak_definition	__ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv
	.p2align	4, 0x90
__ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv: ## @_ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi152:
	.cfi_def_cfa_offset 16
Lcfi153:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi154:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rdi
	addq	$8, %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE7prepareERKd
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE7prepareERKd
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE7prepareERKd: ## @_ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE7prepareERKd
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi155:
	.cfi_def_cfa_offset 16
Lcfi156:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi157:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovsd	(%rdi), %xmm0           ## xmm0 = mem[0],zero
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22vector_instruction_setIfE3setIdEEDv8_fT_
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	vmovups	%ymm0, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	vzeroupper
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE3setIdEEDv8_fT_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE3setIdEEDv8_fT_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE3setIdEEDv8_fT_: ## @_ZN4arrr22vector_instruction_setIfE3setIdEEDv8_fT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi158:
	.cfi_def_cfa_offset 16
Lcfi159:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi160:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$96, %rsp
	vmovsd	%xmm0, 24(%rsp)
	vmovsd	24(%rsp), %xmm0         ## xmm0 = mem[0],zero
	vcvtsd2ss	%xmm0, %xmm0, %xmm0
	vmovss	%xmm0, 76(%rsp)
	vbroadcastss	76(%rsp), %ymm1
	vmovaps	%ymm1, 32(%rsp)
	vmovaps	32(%rsp), %ymm0
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE4loadERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE4loadERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE4loadERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE4loadERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi161:
	.cfi_def_cfa_offset 16
Lcfi162:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi163:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$64, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE4loadERKS8_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi164:
	.cfi_def_cfa_offset 16
Lcfi165:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi166:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	32(%rdx), %rdi
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22vector_instruction_setIfE4loadEPKfm
	movq	-32(%rbp), %rdx         ## 8-byte Reload
	vmovups	%ymm0, (%rdx)
	addq	$32, %rsp
	popq	%rbp
	vzeroupper
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE4loadERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE4loadERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE4loadERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE4loadERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi167:
	.cfi_def_cfa_offset 16
Lcfi168:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi169:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE4loadERKdRKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE4loadES4_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE4loadEPKfm
	.weak_definition	__ZN4arrr22vector_instruction_setIfE4loadEPKfm
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE4loadEPKfm: ## @_ZN4arrr22vector_instruction_setIfE4loadEPKfm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi170:
	.cfi_def_cfa_offset 16
Lcfi171:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi172:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi
	shlq	$2, %rdi
	addq	%rdi, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	vmovups	(%rsi), %ymm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE4loadERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE4loadERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE4loadERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE4loadERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi173:
	.cfi_def_cfa_offset 16
Lcfi174:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi175:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEEclERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEEclERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEEclERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEEclERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi176:
	.cfi_def_cfa_offset 16
Lcfi177:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi178:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$160, %rsp
	movq	%rdi, 104(%rsp)
	movq	%rsi, 96(%rsp)
	movq	%rdx, 88(%rsp)
	movq	104(%rsp), %rdx
	movq	96(%rsp), %rsi
	movq	%rsi, 112(%rsp)
	movq	112(%rsp), %rsi
	movq	%rsi, 120(%rsp)
	movq	120(%rsp), %rsi
	movq	(%rsi), %rsi
	movq	88(%rsp), %rdi
	movq	%rdi, 80(%rsp)          ## 8-byte Spill
	movq	%rdx, %rdi
	movq	80(%rsp), %rax          ## 8-byte Reload
	movq	%rdx, 72(%rsp)          ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm
	movq	72(%rsp), %rax          ## 8-byte Reload
	addq	$64, %rax
	movq	96(%rsp), %rdx
	movq	%rdx, 128(%rsp)
	movq	128(%rsp), %rdx
	addq	$8, %rdx
	movq	%rdx, 136(%rsp)
	movq	136(%rsp), %rsi
	movq	88(%rsp), %rdx
	movq	%rax, %rdi
	vmovaps	%ymm0, 32(%rsp)         ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEEclERKS8_RKm
	vmovaps	32(%rsp), %ymm1         ## 32-byte Reload
	vmovaps	%ymm0, (%rsp)           ## 32-byte Spill
	vmovaps	%ymm1, %ymm0
	vmovaps	(%rsp), %ymm1           ## 32-byte Reload
	callq	__ZN4arrr22vector_instruction_setIfE6binaryINS_7add_tagEEEDv8_fS4_S4_
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE6binaryINS_7add_tagEEEDv8_fS4_S4_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE6binaryINS_7add_tagEEEDv8_fS4_S4_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE6binaryINS_7add_tagEEEDv8_fS4_S4_: ## @_ZN4arrr22vector_instruction_setIfE6binaryINS_7add_tagEEEDv8_fS4_S4_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi179:
	.cfi_def_cfa_offset 16
Lcfi180:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi181:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$128, %rsp
	leaq	24(%rsp), %rdi
	vmovaps	%ymm0, 64(%rsp)
	vmovaps	%ymm1, 32(%rsp)
	vmovaps	64(%rsp), %ymm0
	vmovaps	32(%rsp), %ymm1
	callq	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7add_tagEEclES3_S3_
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi182:
	.cfi_def_cfa_offset 16
Lcfi183:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi184:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovups	(%rdx), %ymm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEEclERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEEclERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEEclERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEEclERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi185:
	.cfi_def_cfa_offset 16
Lcfi186:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi187:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$160, %rsp
	movq	%rdi, 104(%rsp)
	movq	%rsi, 96(%rsp)
	movq	%rdx, 88(%rsp)
	movq	104(%rsp), %rdx
	movq	96(%rsp), %rsi
	movq	%rsi, 112(%rsp)
	movq	112(%rsp), %rsi
	movq	%rsi, 120(%rsp)
	movq	120(%rsp), %rsi
	movq	88(%rsp), %rdi
	movq	%rdi, 80(%rsp)          ## 8-byte Spill
	movq	%rdx, %rdi
	movq	80(%rsp), %rax          ## 8-byte Reload
	movq	%rdx, 72(%rsp)          ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEEclERKdRKm
	movq	72(%rsp), %rax          ## 8-byte Reload
	addq	$32, %rax
	movq	96(%rsp), %rdx
	movq	%rdx, 128(%rsp)
	movq	128(%rsp), %rdx
	addq	$8, %rdx
	movq	%rdx, 136(%rsp)
	movq	136(%rsp), %rdx
	movq	(%rdx), %rsi
	movq	88(%rsp), %rdx
	movq	%rax, %rdi
	vmovaps	%ymm0, 32(%rsp)         ## 32-byte Spill
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEEclES4_RKm
	vmovaps	32(%rsp), %ymm1         ## 32-byte Reload
	vmovaps	%ymm0, (%rsp)           ## 32-byte Spill
	vmovaps	%ymm1, %ymm0
	vmovaps	(%rsp), %ymm1           ## 32-byte Reload
	callq	__ZN4arrr22vector_instruction_setIfE6binaryINS_7mul_tagEEEDv8_fS4_S4_
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7add_tagEEclES3_S3_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7add_tagEEclES3_S3_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7add_tagEEclES3_S3_: ## @_ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7add_tagEEclES3_S3_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi188:
	.cfi_def_cfa_offset 16
Lcfi189:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi190:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$192, %rsp
	movq	%rdi, 88(%rsp)
	vmovaps	%ymm0, 32(%rsp)
	vmovaps	%ymm1, (%rsp)
	vmovaps	32(%rsp), %ymm0
	vmovaps	(%rsp), %ymm1
	vmovaps	%ymm0, 128(%rsp)
	vmovaps	%ymm1, 96(%rsp)
	vmovaps	128(%rsp), %ymm0
	vaddps	96(%rsp), %ymm0, %ymm0
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE6binaryINS_7mul_tagEEEDv8_fS4_S4_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE6binaryINS_7mul_tagEEEDv8_fS4_S4_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE6binaryINS_7mul_tagEEEDv8_fS4_S4_: ## @_ZN4arrr22vector_instruction_setIfE6binaryINS_7mul_tagEEEDv8_fS4_S4_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi191:
	.cfi_def_cfa_offset 16
Lcfi192:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi193:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$128, %rsp
	leaq	24(%rsp), %rdi
	vmovaps	%ymm0, 64(%rsp)
	vmovaps	%ymm1, 32(%rsp)
	vmovaps	64(%rsp), %ymm0
	vmovaps	32(%rsp), %ymm1
	callq	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7mul_tagEEclES3_S3_
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEEclERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEEclERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEEclERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEEclERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi194:
	.cfi_def_cfa_offset 16
Lcfi195:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi196:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovups	(%rdx), %ymm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7mul_tagEEclES3_S3_
	.weak_definition	__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7mul_tagEEclES3_S3_
	.p2align	4, 0x90
__ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7mul_tagEEclES3_S3_: ## @_ZN4arrr22vector_instruction_setIfE9binary_opIDv8_fNS_7mul_tagEEclES3_S3_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi197:
	.cfi_def_cfa_offset 16
Lcfi198:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi199:
	.cfi_def_cfa_register %rbp
	andq	$-32, %rsp
	subq	$192, %rsp
	movq	%rdi, 88(%rsp)
	vmovaps	%ymm0, 32(%rsp)
	vmovaps	%ymm1, (%rsp)
	vmovaps	32(%rsp), %ymm0
	vmovaps	(%rsp), %ymm1
	vmovaps	%ymm0, 128(%rsp)
	vmovaps	%ymm1, 96(%rsp)
	vmovaps	128(%rsp), %ymm0
	vmulps	96(%rsp), %ymm0, %ymm0
	movq	%rbp, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE5storeERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE5storeERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE5storeERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22vector_instruction_setIfEEE5storeERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi200:
	.cfi_def_cfa_offset 16
Lcfi201:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi202:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$64, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE5storeERKS8_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi203:
	.cfi_def_cfa_offset 16
Lcfi204:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi205:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE5storeERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE5storeERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE5storeERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22vector_instruction_setIfEEE5storeERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi206:
	.cfi_def_cfa_offset 16
Lcfi207:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi208:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE5storeERKdRKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22vector_instruction_setIfEEE5storeES4_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE5storeERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE5storeERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE5storeERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22vector_instruction_setIfEEE5storeERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi209:
	.cfi_def_cfa_offset 16
Lcfi210:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi211:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSA_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSA_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSA_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKSA_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi212:
	.cfi_def_cfa_offset 16
Lcfi213:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi214:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	-48(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_
	movq	-64(%rbp), %rax         ## 8-byte Reload
	addq	$16, %rax
	movq	-48(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKS8_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi215:
	.cfi_def_cfa_offset 16
Lcfi216:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi217:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNK4arrr16arithmetic_arrayIfLm0EE4dataEv
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, 8(%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKS8_
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKS8_
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKS8_: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE7prepareERKS8_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi218:
	.cfi_def_cfa_offset 16
Lcfi219:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi220:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rsi
	movq	-48(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE7prepareERKd
	movq	-64(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-48(%rbp), %rsi
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	addq	$8, %rsi
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE7prepareES4_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE7prepareERKd
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE7prepareERKd
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE7prepareERKd: ## @_ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE7prepareERKd
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi221:
	.cfi_def_cfa_offset 16
Lcfi222:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi223:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovsd	(%rdi), %xmm0           ## xmm0 = mem[0],zero
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22scalar_instruction_setIfE3setIdEEfT_
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	vmovss	%xmm0, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE3setIdEEfT_
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE3setIdEEfT_
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE3setIdEEfT_: ## @_ZN4arrr22scalar_instruction_setIfE3setIdEEfT_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi224:
	.cfi_def_cfa_offset 16
Lcfi225:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi226:
	.cfi_def_cfa_register %rbp
	vmovsd	%xmm0, -8(%rbp)
	vmovsd	-8(%rbp), %xmm0         ## xmm0 = mem[0],zero
	vcvtsd2ss	%xmm0, %xmm0, %xmm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi227:
	.cfi_def_cfa_offset 16
Lcfi228:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi229:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$16, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKS8_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi230:
	.cfi_def_cfa_offset 16
Lcfi231:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi232:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	8(%rdx), %rdi
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	callq	__ZN4arrr22scalar_instruction_setIfE4loadEPKfm
	movq	-32(%rbp), %rdx         ## 8-byte Reload
	vmovss	%xmm0, (%rdx)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE4loadERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi233:
	.cfi_def_cfa_offset 16
Lcfi234:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi235:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE4loadERKdRKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE4loadES4_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE4loadEPKfm
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE4loadEPKfm
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE4loadEPKfm: ## @_ZN4arrr22scalar_instruction_setIfE4loadEPKfm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi236:
	.cfi_def_cfa_offset 16
Lcfi237:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi238:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	vmovss	(%rsi,%rdi,4), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE4loadERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE4loadERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE4loadERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE4loadERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi239:
	.cfi_def_cfa_offset 16
Lcfi240:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi241:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEEclERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEEclERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEEclERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEEclERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi242:
	.cfi_def_cfa_offset 16
Lcfi243:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi244:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$16, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	vmovss	%xmm0, -76(%rbp)        ## 4-byte Spill
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEEclERKS8_RKm
	vmovss	-76(%rbp), %xmm1        ## 4-byte Reload
                                        ## xmm1 = mem[0],zero,zero,zero
	vmovss	%xmm0, -80(%rbp)        ## 4-byte Spill
	vmovaps	%xmm1, %xmm0
	vmovss	-80(%rbp), %xmm1        ## 4-byte Reload
                                        ## xmm1 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7add_tagEEEfff
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7add_tagEEEfff
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7add_tagEEEfff
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE6binaryINS_7add_tagEEEfff: ## @_ZN4arrr22scalar_instruction_setIfE6binaryINS_7add_tagEEEfff
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi245:
	.cfi_def_cfa_offset 16
Lcfi246:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi247:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-16(%rbp), %rdi
	vmovss	%xmm0, -4(%rbp)
	vmovss	%xmm1, -8(%rbp)
	vmovss	-4(%rbp), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	vmovss	-8(%rbp), %xmm1         ## xmm1 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7add_tagEEclEff
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi248:
	.cfi_def_cfa_offset 16
Lcfi249:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi250:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovss	(%rdx), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEEclERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEEclERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEEclERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEEclERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi251:
	.cfi_def_cfa_offset 16
Lcfi252:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi253:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEEclERKdRKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	vmovss	%xmm0, -76(%rbp)        ## 4-byte Spill
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEEclES4_RKm
	vmovss	-76(%rbp), %xmm1        ## 4-byte Reload
                                        ## xmm1 = mem[0],zero,zero,zero
	vmovss	%xmm0, -80(%rbp)        ## 4-byte Spill
	vmovaps	%xmm1, %xmm0
	vmovss	-80(%rbp), %xmm1        ## 4-byte Reload
                                        ## xmm1 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7mul_tagEEEfff
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7add_tagEEclEff
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7add_tagEEclEff
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7add_tagEEclEff: ## @_ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7add_tagEEclEff
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi254:
	.cfi_def_cfa_offset 16
Lcfi255:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi256:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	vmovss	%xmm0, -12(%rbp)
	vmovss	%xmm1, -16(%rbp)
	vmovss	-12(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	vaddss	-16(%rbp), %xmm0, %xmm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7mul_tagEEEfff
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE6binaryINS_7mul_tagEEEfff
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE6binaryINS_7mul_tagEEEfff: ## @_ZN4arrr22scalar_instruction_setIfE6binaryINS_7mul_tagEEEfff
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi257:
	.cfi_def_cfa_offset 16
Lcfi258:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi259:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-16(%rbp), %rdi
	vmovss	%xmm0, -4(%rbp)
	vmovss	%xmm1, -8(%rbp)
	vmovss	-4(%rbp), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	vmovss	-8(%rbp), %xmm1         ## xmm1 = mem[0],zero,zero,zero
	callq	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7mul_tagEEclEff
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEEclERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEEclERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEEclERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEEclERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi260:
	.cfi_def_cfa_offset 16
Lcfi261:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi262:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	vmovss	(%rdx), %xmm0           ## xmm0 = mem[0],zero,zero,zero
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7mul_tagEEclEff
	.weak_definition	__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7mul_tagEEclEff
	.p2align	4, 0x90
__ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7mul_tagEEclEff: ## @_ZN4arrr22scalar_instruction_setIfE9binary_opIfNS_7mul_tagEEclEff
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi263:
	.cfi_def_cfa_offset 16
Lcfi264:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi265:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	vmovss	%xmm0, -12(%rbp)
	vmovss	%xmm1, -16(%rbp)
	vmovss	-12(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	vmulss	-16(%rbp), %xmm0, %xmm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSA_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSA_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSA_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7add_tagERKNS_16arithmetic_arrayIfLm0EEENS2_IJNS_7mul_tagEdS7_EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKSA_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi266:
	.cfi_def_cfa_offset 16
Lcfi267:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi268:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$16, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKS8_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm
	.weak_definition	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm: ## @_ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi269:
	.cfi_def_cfa_offset 16
Lcfi270:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi271:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKS8_RKm
	.weak_definition	__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKS8_RKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKS8_RKm: ## @_ZN4arrr12array_eval_tINSt3__15tupleIJNS_7mul_tagEdRKNS_16arithmetic_arrayIfLm0EEEEEEmNS_22scalar_instruction_setIfEEE5storeERKS8_RKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi272:
	.cfi_def_cfa_offset 16
Lcfi273:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi274:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-56(%rbp), %rdi
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	-64(%rbp), %rax         ## 8-byte Reload
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdx
	callq	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE5storeERKdRKm
	movq	-72(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-48(%rbp), %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-56(%rbp), %rdx
	movq	%rax, %rdi
	callq	__ZN4arrr12array_eval_tIRKNS_16arithmetic_arrayIfLm0EEEmNS_22scalar_instruction_setIfEEE5storeES4_RKm
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE5storeERKdRKm
	.weak_definition	__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE5storeERKdRKm
	.p2align	4, 0x90
__ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE5storeERKdRKm: ## @_ZN4arrr12array_eval_tIdmNS_22scalar_instruction_setIfEEE5storeERKdRKm
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi275:
	.cfi_def_cfa_offset 16
Lcfi276:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi277:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_definition	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	4, 0x90
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ## @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## BB#0:
	pushq	%rbp
Lcfi278:
	.cfi_def_cfa_offset 16
Lcfi279:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi280:
	.cfi_def_cfa_register %rbp
	subq	$384, %rsp              ## imm = 0x180
	movq	%rdi, -184(%rbp)
	movq	%rsi, -192(%rbp)
	movq	%rdx, -200(%rbp)
	movq	-184(%rbp), %rsi
Ltmp21:
	leaq	-216(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp22:
	jmp	LBB92_1
LBB92_1:
	leaq	-216(%rbp), %rax
	movq	%rax, -176(%rbp)
	movq	-176(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -249(%rbp)         ## 1-byte Spill
## BB#2:
	movb	-249(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB92_3
	jmp	LBB92_26
LBB92_3:
	leaq	-248(%rbp), %rax
	movq	-184(%rbp), %rcx
	movq	%rax, -160(%rbp)
	movq	%rcx, -168(%rbp)
	movq	-160(%rbp), %rax
	movq	-168(%rbp), %rcx
	movq	%rax, -144(%rbp)
	movq	%rcx, -152(%rbp)
	movq	-144(%rbp), %rax
	movq	-152(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	-24(%rdx), %rdx
	addq	%rdx, %rcx
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	40(%rcx), %rcx
	movq	%rcx, (%rax)
	movq	-192(%rbp), %rsi
	movq	-184(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movl	8(%rax), %edi
	movq	%rsi, -264(%rbp)        ## 8-byte Spill
	movl	%edi, -268(%rbp)        ## 4-byte Spill
## BB#4:
	movl	-268(%rbp), %eax        ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	jne	LBB92_6
## BB#5:
	movq	-192(%rbp), %rax
	addq	-200(%rbp), %rax
	movq	%rax, -280(%rbp)        ## 8-byte Spill
	jmp	LBB92_7
LBB92_6:
	movq	-192(%rbp), %rax
	movq	%rax, -280(%rbp)        ## 8-byte Spill
LBB92_7:
	movq	-280(%rbp), %rax        ## 8-byte Reload
	movq	-192(%rbp), %rcx
	addq	-200(%rbp), %rcx
	movq	-184(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	-184(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-24(%rdi), %rdi
	addq	%rdi, %rsi
	movq	%rsi, -72(%rbp)
	movq	-72(%rbp), %rsi
	movq	%rax, -288(%rbp)        ## 8-byte Spill
	movq	%rcx, -296(%rbp)        ## 8-byte Spill
	movq	%rdx, -304(%rbp)        ## 8-byte Spill
	movq	%rsi, -312(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__111char_traitsIcE3eofEv
	movq	-312(%rbp), %rcx        ## 8-byte Reload
	movl	144(%rcx), %esi
	movl	%eax, %edi
	callq	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	testb	$1, %al
	jne	LBB92_8
	jmp	LBB92_13
LBB92_8:
	movq	-312(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -32(%rbp)
	movb	$32, -33(%rbp)
	movq	-32(%rbp), %rsi
Ltmp24:
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp25:
	jmp	LBB92_9
LBB92_9:
	leaq	-48(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
Ltmp26:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp27:
	movq	%rax, -320(%rbp)        ## 8-byte Spill
	jmp	LBB92_10
LBB92_10:
	movb	-33(%rbp), %al
	movq	-320(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp28:
	movl	%edi, -324(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-324(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -336(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-336(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp29:
	movb	%al, -337(%rbp)         ## 1-byte Spill
	jmp	LBB92_12
LBB92_11:
Ltmp30:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-56(%rbp), %rax
	movl	-60(%rbp), %ecx
	movq	%rax, -352(%rbp)        ## 8-byte Spill
	movl	%ecx, -356(%rbp)        ## 4-byte Spill
	jmp	LBB92_21
LBB92_12:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movb	-337(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %ecx
	movq	-312(%rbp), %rdi        ## 8-byte Reload
	movl	%ecx, 144(%rdi)
LBB92_13:
	movq	-312(%rbp), %rax        ## 8-byte Reload
	movl	144(%rax), %ecx
	movb	%cl, %dl
	movb	%dl, -357(%rbp)         ## 1-byte Spill
## BB#14:
	movq	-248(%rbp), %rdi
Ltmp31:
	movb	-357(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %r9d
	movq	-264(%rbp), %rsi        ## 8-byte Reload
	movq	-288(%rbp), %rdx        ## 8-byte Reload
	movq	-296(%rbp), %rcx        ## 8-byte Reload
	movq	-304(%rbp), %r8         ## 8-byte Reload
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp32:
	movq	%rax, -368(%rbp)        ## 8-byte Spill
	jmp	LBB92_15
LBB92_15:
	leaq	-240(%rbp), %rax
	movq	-368(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -240(%rbp)
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	cmpq	$0, (%rax)
	jne	LBB92_25
## BB#16:
	movq	-184(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -112(%rbp)
	movl	$5, -116(%rbp)
	movq	-112(%rbp), %rax
	movl	-116(%rbp), %edx
	movq	%rax, -96(%rbp)
	movl	%edx, -100(%rbp)
	movq	-96(%rbp), %rax
	movl	32(%rax), %edx
	movl	-100(%rbp), %esi
	orl	%esi, %edx
Ltmp33:
	movq	%rax, %rdi
	movl	%edx, %esi
	callq	__ZNSt3__18ios_base5clearEj
Ltmp34:
	jmp	LBB92_17
LBB92_17:
	jmp	LBB92_18
LBB92_18:
	jmp	LBB92_25
LBB92_19:
Ltmp23:
	movl	%edx, %ecx
	movq	%rax, -224(%rbp)
	movl	%ecx, -228(%rbp)
	jmp	LBB92_22
LBB92_20:
Ltmp35:
	movl	%edx, %ecx
	movq	%rax, -352(%rbp)        ## 8-byte Spill
	movl	%ecx, -356(%rbp)        ## 4-byte Spill
	jmp	LBB92_21
LBB92_21:
	movl	-356(%rbp), %eax        ## 4-byte Reload
	movq	-352(%rbp), %rcx        ## 8-byte Reload
	leaq	-216(%rbp), %rdi
	movq	%rcx, -224(%rbp)
	movl	%eax, -228(%rbp)
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
LBB92_22:
	movq	-224(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	-184(%rbp), %rdi
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
Ltmp36:
	movq	%rax, -376(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp37:
	jmp	LBB92_23
LBB92_23:
	callq	___cxa_end_catch
LBB92_24:
	movq	-184(%rbp), %rax
	addq	$384, %rsp              ## imm = 0x180
	popq	%rbp
	retq
LBB92_25:
	jmp	LBB92_26
LBB92_26:
	leaq	-216(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	jmp	LBB92_24
LBB92_27:
Ltmp38:
	movl	%edx, %ecx
	movq	%rax, -224(%rbp)
	movl	%ecx, -228(%rbp)
Ltmp39:
	callq	___cxa_end_catch
Ltmp40:
	jmp	LBB92_28
LBB92_28:
	jmp	LBB92_29
LBB92_29:
	movq	-224(%rbp), %rdi
	callq	__Unwind_Resume
LBB92_30:
Ltmp41:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -380(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table92:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\201\201\200\200"      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	117                     ## Call site table length
Lset13 = Ltmp21-Lfunc_begin2            ## >> Call Site 1 <<
	.long	Lset13
Lset14 = Ltmp22-Ltmp21                  ##   Call between Ltmp21 and Ltmp22
	.long	Lset14
Lset15 = Ltmp23-Lfunc_begin2            ##     jumps to Ltmp23
	.long	Lset15
	.byte	5                       ##   On action: 3
Lset16 = Ltmp24-Lfunc_begin2            ## >> Call Site 2 <<
	.long	Lset16
Lset17 = Ltmp25-Ltmp24                  ##   Call between Ltmp24 and Ltmp25
	.long	Lset17
Lset18 = Ltmp35-Lfunc_begin2            ##     jumps to Ltmp35
	.long	Lset18
	.byte	5                       ##   On action: 3
Lset19 = Ltmp26-Lfunc_begin2            ## >> Call Site 3 <<
	.long	Lset19
Lset20 = Ltmp29-Ltmp26                  ##   Call between Ltmp26 and Ltmp29
	.long	Lset20
Lset21 = Ltmp30-Lfunc_begin2            ##     jumps to Ltmp30
	.long	Lset21
	.byte	3                       ##   On action: 2
Lset22 = Ltmp31-Lfunc_begin2            ## >> Call Site 4 <<
	.long	Lset22
Lset23 = Ltmp34-Ltmp31                  ##   Call between Ltmp31 and Ltmp34
	.long	Lset23
Lset24 = Ltmp35-Lfunc_begin2            ##     jumps to Ltmp35
	.long	Lset24
	.byte	5                       ##   On action: 3
Lset25 = Ltmp34-Lfunc_begin2            ## >> Call Site 5 <<
	.long	Lset25
Lset26 = Ltmp36-Ltmp34                  ##   Call between Ltmp34 and Ltmp36
	.long	Lset26
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset27 = Ltmp36-Lfunc_begin2            ## >> Call Site 6 <<
	.long	Lset27
Lset28 = Ltmp37-Ltmp36                  ##   Call between Ltmp36 and Ltmp37
	.long	Lset28
Lset29 = Ltmp38-Lfunc_begin2            ##     jumps to Ltmp38
	.long	Lset29
	.byte	0                       ##   On action: cleanup
Lset30 = Ltmp37-Lfunc_begin2            ## >> Call Site 7 <<
	.long	Lset30
Lset31 = Ltmp39-Ltmp37                  ##   Call between Ltmp37 and Ltmp39
	.long	Lset31
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset32 = Ltmp39-Lfunc_begin2            ## >> Call Site 8 <<
	.long	Lset32
Lset33 = Ltmp40-Ltmp39                  ##   Call between Ltmp39 and Ltmp40
	.long	Lset33
Lset34 = Ltmp41-Lfunc_begin2            ##     jumps to Ltmp41
	.long	Lset34
	.byte	5                       ##   On action: 3
Lset35 = Ltmp40-Lfunc_begin2            ## >> Call Site 9 <<
	.long	Lset35
Lset36 = Lfunc_end2-Ltmp40              ##   Call between Ltmp40 and Lfunc_end2
	.long	Lset36
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	0                       ## >> Action Record 1 <<
                                        ##   Cleanup
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 2 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 1
	.byte	1                       ## >> Action Record 3 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_definition	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6lengthEPKc:  ## @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi281:
	.cfi_def_cfa_offset 16
Lcfi282:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi283:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_definition	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	4, 0x90
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
## BB#0:
	pushq	%rbp
Lcfi284:
	.cfi_def_cfa_offset 16
Lcfi285:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi286:
	.cfi_def_cfa_register %rbp
	subq	$464, %rsp              ## imm = 0x1D0
	movb	%r9b, %al
	movq	%rdi, -312(%rbp)
	movq	%rsi, -320(%rbp)
	movq	%rdx, -328(%rbp)
	movq	%rcx, -336(%rbp)
	movq	%r8, -344(%rbp)
	movb	%al, -345(%rbp)
	cmpq	$0, -312(%rbp)
	jne	LBB94_2
## BB#1:
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
	jmp	LBB94_26
LBB94_2:
	movq	-336(%rbp), %rax
	movq	-320(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -360(%rbp)
	movq	-344(%rbp), %rax
	movq	%rax, -296(%rbp)
	movq	-296(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -368(%rbp)
	movq	-368(%rbp), %rax
	cmpq	-360(%rbp), %rax
	jle	LBB94_4
## BB#3:
	movq	-360(%rbp), %rax
	movq	-368(%rbp), %rcx
	subq	%rax, %rcx
	movq	%rcx, -368(%rbp)
	jmp	LBB94_5
LBB94_4:
	movq	$0, -368(%rbp)
LBB94_5:
	movq	-328(%rbp), %rax
	movq	-320(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -376(%rbp)
	cmpq	$0, -376(%rbp)
	jle	LBB94_9
## BB#6:
	movq	-312(%rbp), %rax
	movq	-320(%rbp), %rcx
	movq	-376(%rbp), %rdx
	movq	%rax, -224(%rbp)
	movq	%rcx, -232(%rbp)
	movq	%rdx, -240(%rbp)
	movq	-224(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-232(%rbp), %rsi
	movq	-240(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-376(%rbp), %rax
	je	LBB94_8
## BB#7:
	movq	$0, -312(%rbp)
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
	jmp	LBB94_26
LBB94_8:
	jmp	LBB94_9
LBB94_9:
	cmpq	$0, -368(%rbp)
	jle	LBB94_21
## BB#10:
	xorl	%esi, %esi
	movl	$24, %eax
	movl	%eax, %edx
	leaq	-400(%rbp), %rcx
	movq	-368(%rbp), %rdi
	movb	-345(%rbp), %r8b
	movq	%rcx, -200(%rbp)
	movq	%rdi, -208(%rbp)
	movb	%r8b, -209(%rbp)
	movq	-200(%rbp), %rcx
	movq	-208(%rbp), %rdi
	movb	-209(%rbp), %r8b
	movq	%rcx, -176(%rbp)
	movq	%rdi, -184(%rbp)
	movb	%r8b, -185(%rbp)
	movq	-176(%rbp), %rcx
	movq	%rcx, -168(%rbp)
	movq	-168(%rbp), %rdi
	movq	%rdi, -160(%rbp)
	movq	-160(%rbp), %rdi
	movq	%rdi, -152(%rbp)
	movq	-152(%rbp), %rdi
	movq	%rdi, %r9
	movq	%r9, -144(%rbp)
	movq	%rcx, -424(%rbp)        ## 8-byte Spill
	callq	_memset
	movq	-184(%rbp), %rsi
	movq	-424(%rbp), %rdi        ## 8-byte Reload
	movsbl	-185(%rbp), %edx
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	leaq	-400(%rbp), %rcx
	movq	-312(%rbp), %rsi
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	%rcx, -120(%rbp)
	movq	-120(%rbp), %rdi
	movq	%rdi, -112(%rbp)
	movq	-112(%rbp), %rdi
	movq	%rdi, -104(%rbp)
	movq	-104(%rbp), %rdi
	movzbl	(%rdi), %eax
	andl	$1, %eax
	cmpl	$0, %eax
	movq	%rsi, -432(%rbp)        ## 8-byte Spill
	movq	%rcx, -440(%rbp)        ## 8-byte Spill
	je	LBB94_12
## BB#11:
	movq	-440(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rcx
	movq	%rcx, -48(%rbp)
	movq	-48(%rbp), %rcx
	movq	%rcx, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rcx, -448(%rbp)        ## 8-byte Spill
	jmp	LBB94_13
LBB94_12:
	movq	-440(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rcx
	movq	%rcx, -88(%rbp)
	movq	-88(%rbp), %rcx
	movq	%rcx, -80(%rbp)
	movq	-80(%rbp), %rcx
	addq	$1, %rcx
	movq	%rcx, -72(%rbp)
	movq	-72(%rbp), %rcx
	movq	%rcx, -64(%rbp)
	movq	-64(%rbp), %rcx
	movq	%rcx, -448(%rbp)        ## 8-byte Spill
LBB94_13:
	movq	-448(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	-368(%rbp), %rcx
	movq	-432(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -8(%rbp)
	movq	%rax, -16(%rbp)
	movq	%rcx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
Ltmp42:
	movq	%rax, %rdi
	callq	*%rcx
Ltmp43:
	movq	%rax, -456(%rbp)        ## 8-byte Spill
	jmp	LBB94_14
LBB94_14:
	jmp	LBB94_15
LBB94_15:
	movq	-456(%rbp), %rax        ## 8-byte Reload
	cmpq	-368(%rbp), %rax
	je	LBB94_18
## BB#16:
	movq	$0, -312(%rbp)
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
	movl	$1, -416(%rbp)
	jmp	LBB94_19
LBB94_17:
Ltmp44:
	leaq	-400(%rbp), %rdi
	movl	%edx, %ecx
	movq	%rax, -408(%rbp)
	movl	%ecx, -412(%rbp)
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	jmp	LBB94_27
LBB94_18:
	movl	$0, -416(%rbp)
LBB94_19:
	leaq	-400(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	movl	-416(%rbp), %eax
	testl	%eax, %eax
	movl	%eax, -460(%rbp)        ## 4-byte Spill
	je	LBB94_20
	jmp	LBB94_29
LBB94_29:
	movl	-460(%rbp), %eax        ## 4-byte Reload
	subl	$1, %eax
	movl	%eax, -464(%rbp)        ## 4-byte Spill
	je	LBB94_26
	jmp	LBB94_28
LBB94_20:
	jmp	LBB94_21
LBB94_21:
	movq	-336(%rbp), %rax
	movq	-328(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -376(%rbp)
	cmpq	$0, -376(%rbp)
	jle	LBB94_25
## BB#22:
	movq	-312(%rbp), %rax
	movq	-328(%rbp), %rcx
	movq	-376(%rbp), %rdx
	movq	%rax, -248(%rbp)
	movq	%rcx, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	-248(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-256(%rbp), %rsi
	movq	-264(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-376(%rbp), %rax
	je	LBB94_24
## BB#23:
	movq	$0, -312(%rbp)
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
	jmp	LBB94_26
LBB94_24:
	jmp	LBB94_25
LBB94_25:
	movq	-344(%rbp), %rax
	movq	%rax, -272(%rbp)
	movq	$0, -280(%rbp)
	movq	-272(%rbp), %rax
	movq	24(%rax), %rcx
	movq	%rcx, -288(%rbp)
	movq	-280(%rbp), %rcx
	movq	%rcx, 24(%rax)
	movq	-312(%rbp), %rax
	movq	%rax, -304(%rbp)
LBB94_26:
	movq	-304(%rbp), %rax
	addq	$464, %rsp              ## imm = 0x1D0
	popq	%rbp
	retq
LBB94_27:
	movq	-408(%rbp), %rdi
	callq	__Unwind_Resume
LBB94_28:
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table94:
Lexception3:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.byte	41                      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	39                      ## Call site table length
Lset37 = Lfunc_begin3-Lfunc_begin3      ## >> Call Site 1 <<
	.long	Lset37
Lset38 = Ltmp42-Lfunc_begin3            ##   Call between Lfunc_begin3 and Ltmp42
	.long	Lset38
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset39 = Ltmp42-Lfunc_begin3            ## >> Call Site 2 <<
	.long	Lset39
Lset40 = Ltmp43-Ltmp42                  ##   Call between Ltmp42 and Ltmp43
	.long	Lset40
Lset41 = Ltmp44-Lfunc_begin3            ##     jumps to Ltmp44
	.long	Lset41
	.byte	0                       ##   On action: cleanup
Lset42 = Ltmp43-Lfunc_begin3            ## >> Call Site 3 <<
	.long	Lset42
Lset43 = Lfunc_end3-Ltmp43              ##   Call between Ltmp43 and Lfunc_end3
	.long	Lset43
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.weak_definition	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE11eq_int_typeEii: ## @_ZNSt3__111char_traitsIcE11eq_int_typeEii
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi287:
	.cfi_def_cfa_offset 16
Lcfi288:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi289:
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	cmpl	-8(%rbp), %esi
	sete	%al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__111char_traitsIcE3eofEv
	.weak_definition	__ZNSt3__111char_traitsIcE3eofEv
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE3eofEv:       ## @_ZNSt3__111char_traitsIcE3eofEv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi290:
	.cfi_def_cfa_offset 16
Lcfi291:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi292:
	.cfi_def_cfa_register %rbp
	movl	$4294967295, %eax       ## imm = 0xFFFFFFFF
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	" "


.subsections_via_symbols
