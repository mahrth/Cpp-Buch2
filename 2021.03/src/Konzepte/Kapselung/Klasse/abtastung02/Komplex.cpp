#include "Komplex.h"
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

string Komplex::text() {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

double Komplex::betrag() {
	if(betragGueltig==false) {
		cout << "Betrag neu berechnen";
		betragswert = sqrt(re*re+im*im);
		betragGueltig = true;
	}
	return betragswert;
}

void Komplex::wert(double r,  double i) { 
	re = r;
	im = i;
	betragGueltig = false;
}
