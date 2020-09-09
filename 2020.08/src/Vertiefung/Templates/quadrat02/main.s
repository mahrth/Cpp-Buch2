	.file	"main.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN7KomplexC2Edd,"axG",@progbits,_ZN7KomplexC5Edd,comdat
	.align 2
	.weak	_ZN7KomplexC2Edd
	.type	_ZN7KomplexC2Edd, @function
_ZN7KomplexC2Edd:
.LFB1384:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, (%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 8(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1384:
	.size	_ZN7KomplexC2Edd, .-_ZN7KomplexC2Edd
	.weak	_ZN7KomplexC1Edd
	.set	_ZN7KomplexC1Edd,_ZN7KomplexC2Edd
	.section	.rodata
.LC3:
	.string	""
.LC4:
	.string	"quadrat(i): "
.LC5:
	.string	"\nquadrat(d): "
.LC6:
	.string	"\nquadrat(k): "
.LC7:
	.string	"\nquadrat<int>(d): "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1387:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1387
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$120, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$2, -108(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -104(%rbp)
	movsd	.LC1(%rip), %xmm0
	movabsq	$4616189618054758400, %rdx
	leaq	-96(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rdx, -120(%rbp)
	movsd	-120(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZN7KomplexC1Edd
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-80(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-108(%rbp), %rax
	movq	%rax, %rdi
	call	_Z7quadratIiET_RKS0_
	movl	%eax, %ebx
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	leaq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	_Z7quadratIdET_RKS0_
	movsd	%xmm0, -120(%rbp)
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-120(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_Z7quadratI7KomplexET_RKS1_
	movq	%xmm0, %rax
	movapd	%xmm1, %xmm0
	movq	%rax, -80(%rbp)
	movsd	%xmm0, -72(%rbp)
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	leaq	-80(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZlsRSoRK7Komplex
	movsd	-104(%rbp), %xmm0
	cvttsd2si	%xmm0, %eax
	movl	%eax, -80(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_Z7quadratIiET_RKS0_
	movl	%eax, %ebx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
.LEHE1:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movl	$0, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L6
	jmp	.L9
.L7:
	movq	%rax, %rbx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume
.L8:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE2:
.L9:
	call	__stack_chk_fail
.L6:
	addq	$120, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1387:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1387:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1387-.LLSDACSB1387
.LLSDACSB1387:
	.uleb128 .LEHB0-.LFB1387
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L7-.LFB1387
	.uleb128 0
	.uleb128 .LEHB1-.LFB1387
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L8-.LFB1387
	.uleb128 0
	.uleb128 .LEHB2-.LFB1387
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1387:
	.text
	.size	main, .-main
	.section	.text._Z7quadratIiET_RKS0_,"axG",@progbits,_Z7quadratIiET_RKS0_,comdat
	.weak	_Z7quadratIiET_RKS0_
	.type	_Z7quadratIiET_RKS0_, @function
_Z7quadratIiET_RKS0_:
.LFB1455:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	imull	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1455:
	.size	_Z7quadratIiET_RKS0_, .-_Z7quadratIiET_RKS0_
	.section	.text._Z7quadratIdET_RKS0_,"axG",@progbits,_Z7quadratIdET_RKS0_,comdat
	.weak	_Z7quadratIdET_RKS0_
	.type	_Z7quadratIdET_RKS0_, @function
_Z7quadratIdET_RKS0_:
.LFB1456:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	(%rax), %xmm0
	mulsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1456:
	.size	_Z7quadratIdET_RKS0_, .-_Z7quadratIdET_RKS0_
	.section	.text._Z7quadratI7KomplexET_RKS1_,"axG",@progbits,_Z7quadratI7KomplexET_RKS1_,comdat
	.weak	_Z7quadratI7KomplexET_RKS1_
	.type	_Z7quadratI7KomplexET_RKS1_, @function
_Z7quadratI7KomplexET_RKS1_:
.LFB1458:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK7KomplexmlERKS_
	movq	%xmm0, %rcx
	movapd	%xmm1, %xmm0
	movl	$0, %eax
	movl	$0, %edx
	movq	%rcx, %rax
	movq	%xmm0, %rdx
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rcx, -32(%rbp)
	movsd	-32(%rbp), %xmm0
	movq	%rdx, -32(%rbp)
	movsd	-32(%rbp), %xmm1
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1458:
	.size	_Z7quadratI7KomplexET_RKS1_, .-_Z7quadratI7KomplexET_RKS1_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1591:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L18
	cmpl	$65535, -8(%rbp)
	jne	.L18
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1591:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1592:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1592:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1073217536
	.align 8
.LC1:
	.long	0
	.long	1075052544
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
