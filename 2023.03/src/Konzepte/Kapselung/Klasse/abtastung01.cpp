#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {	
	double re, im;
	string text() const;
	void wert(double r, double i);
	double real() const { return re; }
	double imag() const { return im; }
	Komplex mul(const Komplex& z) const;
};

struct Abtastwert {	
	double t;	
	Komplex amp; 	
	string text() const {
		stringstream s;
		s << t << ": " << amp.text();
		return s.str();
	}
};

int main() {
	Abtastwert abtastwert;	
	abtastwert.t = 0.42;	
	abtastwert.amp.wert(12.54, -31.92);	
	cout << abtastwert.text() << endl;	
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}

Komplex Komplex::mul(const Komplex& z) const {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

void Komplex::wert(double r,  double i) { 
	re = r;
	im = i;
}
