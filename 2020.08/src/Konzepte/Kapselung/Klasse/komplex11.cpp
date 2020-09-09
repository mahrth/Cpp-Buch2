#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	double real() const {	return re; }
	double imag() const { return im; }
	void ausgeben() const;
	Komplex mul(const Komplex& z) const;
	double betrag();
	void wert(double re, double im);
};

void Komplex::ausgeben() const {
	cout << re << ((im<0)?"":"+") << im << "i";
}

double Komplex::betrag() {
	if(betragGueltig==false) {
		cout << "Betrag neu berechnen";
		betragswert = sqrt(re*re+im*im);
		betragGueltig = true;
	}
	return betragswert;
}

Komplex Komplex::mul(const Komplex& z) const {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

void Komplex::wert(double re,  double im) { 
	this->re = re;
	this->im = im;
	betragGueltig = false;
}

int main() {
	Komplex a;
	a.wert(1.0, 2.0);
	cout << "a = ";
	a.ausgeben();
	cout << endl;
}
