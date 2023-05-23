funkWert(int):
	imul    edi, edi
	mov     eax, edi
	ret
funkZeiger(int*):
	mov     eax, DWORD PTR [rdi]
	imul    eax, eax
	ret
funkReferenz(int&):
	mov     eax, DWORD PTR [rdi]
	imul    eax, eax
	ret
main:
	sub     rsp, 8
	mov     esi, 4
	mov     edi, OFFSET FLAT:_ZSt4cout
	call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov     rdi, rax
	call    std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) [clone .isra.0]
	mov     esi, 4
	mov     edi, OFFSET FLAT:_ZSt4cout
	call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov     rdi, rax
	call    std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) [clone .isra.0]
	mov     esi, 4
	mov     edi, OFFSET FLAT:_ZSt4cout
	call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov     rdi, rax
	call    std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) [clone .isra.0]
	xor     eax, eax
	add     rsp, 8
	ret
_GLOBAL__sub_I_funkWert(int):
	sub     rsp, 8
	mov     edi, OFFSET FLAT:_ZStL8__ioinit
	call    std::ios_base::Init::Init() [complete object constructor]
	mov     edx, OFFSET FLAT:__dso_handle
	mov     esi, OFFSET FLAT:_ZStL8__ioinit
	mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	add     rsp, 8
	jmp     __cxa_atexit
