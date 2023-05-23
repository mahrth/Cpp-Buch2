#include "Komplex.h"
#include <cmath>
#include <iostream>
using namespace std;

double Komplex::betrag() {
	cout << "betrag() ";
	return sqrt(re*re+im*im);
}

void Komplex::ausgeben() {
	cout << re << " + " << im << "i";
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}
