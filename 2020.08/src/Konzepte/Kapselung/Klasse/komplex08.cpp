#include <cmath>
#include <iostream>
using namespace std;

struct Komplex {
	double re=0, im=0;	
	double betragswert=0;	
	bool betragGueltig=true;
	void ausgeben();	
	Komplex mul(const Komplex& z);
	double betrag() {
		if(betragGueltig==false) {
			cout << "{Betrag neu berechnen} ";
			betragswert = sqrt(re*re+im*im);
			betragGueltig = true;
		}
		return betragswert;
	}
	void wert(double re,  double im) { 
		this->re = re; 
		this->im = im;
		betragGueltig = false;
	}
};

int main() {
	Komplex a;
	a.wert(1.0, -1.0);
	cout << "|a| = " << a.betrag();
	cout << "\n|a| = " << a.betrag();
	a.wert(-2.0, 2.0);
	cout << "\n|a| = " << a.betrag();
	cout << endl;
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


