#include "Komplex.h"
#include <iostream>
using namespace std;

void Komplex::ausgeben() {
	cout << re << ((im<0)?"":"+") << im << "i";
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}
