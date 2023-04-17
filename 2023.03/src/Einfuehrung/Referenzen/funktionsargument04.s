	.file	"funktionsargument04.cpp"
	.intel_syntax noprefix
	.text
	.p2align 4
	.globl	_Z8funkWerti
	.type	_Z8funkWerti, @function
_Z8funkWerti:
.LFB1590:
	.cfi_startproc
	endbr64
	mov	eax, edi
	imul	eax, edi
	ret
	.cfi_endproc
.LFE1590:
	.size	_Z8funkWerti, .-_Z8funkWerti
	.p2align 4
	.globl	_Z10funkZeigerPi
	.type	_Z10funkZeigerPi, @function
_Z10funkZeigerPi:
.LFB1591:
	.cfi_startproc
	endbr64
	mov	eax, DWORD PTR [rdi]
	imul	eax, eax
	ret
	.cfi_endproc
.LFE1591:
	.size	_Z10funkZeigerPi, .-_Z10funkZeigerPi
	.p2align 4
	.globl	_Z12funkReferenzRi
	.type	_Z12funkReferenzRi, @function
_Z12funkReferenzRi:
.LFB1592:
	.cfi_startproc
	endbr64
	mov	eax, DWORD PTR [rdi]
	imul	eax, eax
	ret
	.cfi_endproc
.LFE1592:
	.size	_Z12funkReferenzRi, .-_Z12funkReferenzRi
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB1593:
	.cfi_startproc
	endbr64
	sub	rsp, 8
	.cfi_def_cfa_offset 16
	mov	esi, 4
	lea	rdi, _ZSt4cout[rip]
	call	_ZNSolsEi@PLT
	mov	rdi, rax
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	mov	esi, 4
	lea	rdi, _ZSt4cout[rip]
	call	_ZNSolsEi@PLT
	mov	rdi, rax
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	mov	esi, 4
	lea	rdi, _ZSt4cout[rip]
	call	_ZNSolsEi@PLT
	mov	rdi, rax
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	xor	eax, eax
	add	rsp, 8
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1593:
	.size	main, .-main
	.p2align 4
	.type	_GLOBAL__sub_I__Z8funkWerti, @function
_GLOBAL__sub_I__Z8funkWerti:
.LFB2079:
	.cfi_startproc
	endbr64
	sub	rsp, 8
	.cfi_def_cfa_offset 16
	lea	rdi, _ZStL8__ioinit[rip]
	call	_ZNSt8ios_base4InitC1Ev@PLT
	mov	rdi, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	add	rsp, 8
	.cfi_def_cfa_offset 8
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZStL8__ioinit[rip]
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE2079:
	.size	_GLOBAL__sub_I__Z8funkWerti, .-_GLOBAL__sub_I__Z8funkWerti
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z8funkWerti
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
