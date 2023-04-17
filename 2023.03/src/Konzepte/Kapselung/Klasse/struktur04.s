	.file	"struktur04.cpp"
	.intel_syntax noprefix
	.text
	.section	.text._ZN1S8funktionEi,"axG",@progbits,_ZN1S8funktionEi,comdat
	.align 2
	.weak	_ZN1S8funktionEi
	.type	_ZN1S8funktionEi, @function
_ZN1S8funktionEi:
.LFB0:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	DWORD PTR -12[rbp], esi
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR [rax]
	imul	eax, DWORD PTR -12[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_ZN1S8funktionEi, .-_ZN1S8funktionEi
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	DWORD PTR -12[rbp], 2
	lea	rax, -12[rbp]
	mov	esi, 3
	mov	rdi, rax
	call	_ZN1S8funktionEi
	nop
	mov	rdx, QWORD PTR -8[rbp]
	xor	rdx, QWORD PTR fs:40
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
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
