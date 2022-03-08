#include <cmath>
#include <iostream>
using namespace std;

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	void ausgeben();
	void wert(double re, double im);
	double real() {	return re; }
	double imag() {	return im; }
	Komplex mul(const Komplex& z);
	double betrag();
};

void Komplex::ausgeben() {
	cout << re << ((im<0)?"":"+") << im << "i";
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

void Komplex::wert(double re,  double im) { 
	this->re = re; 
	this->im = im;
	betragGueltig = false;
}

int main() {
	Komplex a;
	a.wert(1.0, -1.0);
	// cout << a.re << " " << a.im: 
	cout << "a.real(): " << a.real() << "  a.imag(): " << a.imag() << endl;
	cout << "\n|a| = " << a.betrag();
	cout << "\n|a| = " << a.betrag();	
}
