#include "Komplex.h"
#include <cmath>
#include <iostream>
using namespace std;

Komplex::operator double() const {
	return sqrt(re*re+im*im);
}

void Komplex::wert(double r,  double i) { 
	re = r;
	im = i;
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.real() << ((k.imag()<0)?"":"+") << k.imag() << "i";
	return os;
}

