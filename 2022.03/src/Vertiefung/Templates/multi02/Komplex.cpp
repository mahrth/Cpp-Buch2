#include "Komplex.h"
#include <iostream>
using namespace std;

Komplex Komplex::operator*(const Komplex& k) const { 
	Komplex s;
	s.re = re*k.re - im*k.im;
	s.im = re*k.im + im*k.re;
	return s;
}	

Komplex operator*(const Komplex& k, const double d) { 
	return Komplex{k.re*d,k.im*d};
}

Komplex operator*(const double d, const Komplex& k) {
	return Komplex{k.re*d,k.im*d};
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}
