#include <cmath>
#include <iostream>
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
	double betrag() const;
	void wert(double re, double im);
};

double Komplex::betrag() {
	if(betragGueltig==false) {
		cout << "{Betrag neu berechnen} ";
		betragswert = sqrt(re*re+im*im);
		betragGueltig = true;
	}
	return betragswert;
}

double Komplex::betrag() const {
	return sqrt(re*re+im*im);
}

double addiereBetraege(const Komplex& k1, const Komplex& k2) {
	return k1.betrag() + k2.betrag();
}

int main() {
	Komplex a, b;
	a.wert(1.0, 2.0);
	b.wert(3.0, 4.0);	
	cout << "|a| + |b| = " << addiereBetraege(a,b);
	cout << "\n|a| = " << a.betrag();
	cout << "\n|b| = " << b.betrag() << endl;
}

void Komplex::ausgeben() const {
	cout << re << ((im<0)?"":"+") << im << "i";
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
