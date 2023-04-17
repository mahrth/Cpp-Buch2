S::funktion(int):
	mov     eax, DWORD PTR [rdi]
	imul    eax, esi
	ret
main:
	mov     eax, 6
	ret
