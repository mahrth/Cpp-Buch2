#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	string text() const {
		stringstream s;
		s << re << ((im<0)?"":"+") << im << "i";
		return s.str();
	}
	void wert(double re, double im);
	double real() const { return re; }
	double imag() const { return im; }
	Komplex mul(const Komplex& z) const;
	double betrag();
	double betrag() const;
};

int main() {
	Komplex a, b;
	a.wert(1.0, -2.0);
	b.wert(3.0, 4.0);	
	cout << "a = " << a.text()	<< "\nb = " << b.text() << endl;
}

Komplex Komplex::mul(const Komplex& z) const {
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

double Komplex::betrag() const {
	return sqrt(re*re+im*im);
}

void Komplex::wert(double re,  double im) { 
	this->re = re;
	this->im = im;
	betragGueltig = false;
}
