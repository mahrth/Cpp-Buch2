#pragma once
#include <iostream>

struct Komplex {
	double re;
	double im;	
	inline void ausgeben();
	inline Komplex mul(const Komplex& z);
};

void Komplex::ausgeben() {
	std::cout << re << ((im<0)?"":"+") << im << "i";
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}
