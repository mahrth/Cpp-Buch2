f1(int):
	push  rbp
	mov   rbp, rsp
	mov   DWORD PTR [rbp-4], edi
	mov   eax, DWORD PTR [rbp-4]
	imul  eax, eax
	pop   rbp
	ret
f2(int*):
	push  rbp
	mov   rbp, rsp
	mov   QWORD PTR [rbp-8], rdi
	mov   rax, QWORD PTR [rbp-8]
	mov   edx, DWORD PTR [rax]
	mov   rax, QWORD PTR [rbp-8]
	mov   eax, DWORD PTR [rax]
	imul  eax, edx
	pop   rbp
	ret
f3(int&):
	push  rbp
	mov   rbp, rsp
	mov   QWORD PTR [rbp-8], rdi
	mov   rax, QWORD PTR [rbp-8]
	mov   edx, DWORD PTR [rax]
	mov   rax, QWORD PTR [rbp-8]
	mov   eax, DWORD PTR [rax]
	imul  eax, edx
	pop   rbp
	ret
main:
	push  rbp
	mov   rbp, rsp
	sub   rsp, 16
	mov   DWORD PTR [rbp-4], 2
	mov   eax, DWORD PTR [rbp-4]
	mov   edi, eax
	call  f1(int)
	mov   esi, eax
	mov   edi, OFFSET FLAT:_ZSt4cout
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov   esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov   rdi, rax
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
	lea   rax, [rbp-4]
	mov   rdi, rax
	call  f2(int*)
	mov   esi, eax
	mov   edi, OFFSET FLAT:_ZSt4cout
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov   esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov   rdi, rax
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
	lea   rax, [rbp-4]
	mov   rdi, rax
	call  f3(int&)
	mov   esi, eax
	mov   edi, OFFSET FLAT:_ZSt4cout
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
	mov   esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov   rdi, rax
	call  std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
	mov   eax, 0
	leave
	ret
__static_initialization_and_destruction_0(int, int):
	push  rbp
	mov   rbp, rsp
	sub   rsp, 16
	mov   DWORD PTR [rbp-4], edi
	mov   DWORD PTR [rbp-8], esi
	cmp   DWORD PTR [rbp-4], 1
	jne   .L11
	cmp   DWORD PTR [rbp-8], 65535
	jne   .L11
	mov   edi, OFFSET FLAT:_ZStL8__ioinit
	call  std::ios_base::Init::Init() [complete object constructor]
	mov   edx, OFFSET FLAT:__dso_handle
	mov   esi, OFFSET FLAT:_ZStL8__ioinit
	mov   edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	call  __cxa_atexit
.L11:
	nop
	leave
	ret
_GLOBAL__sub_I_f1(int):
	push  rbp
	mov   rbp, rsp
	mov   esi, 65535
	mov   edi, 1
	call  __static_initialization_and_destruction_0(int, int)
	pop   rbp
	ret
