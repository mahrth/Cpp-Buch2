funktion(S const&, int):
	push    rbp
	mov     rbp, rsp
	mov     QWORD PTR [rbp-8], rdi
	mov     DWORD PTR [rbp-12], esi
	mov     rax, QWORD PTR [rbp-8]
	mov     eax, DWORD PTR [rax]
	imul    eax, DWORD PTR [rbp-12]
	pop     rbp
	ret
main:
	push    rbp
	mov     rbp, rsp
	sub     rsp, 16
	mov     DWORD PTR [rbp-4], 2
	lea     rax, [rbp-4]
	mov     esi, 3
	mov     rdi, rax
	call    funktion(S const&, int)
	nop
	leave
	ret
