#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re, im, betragWert;
	bool betragNeuBerechnen;
public:	
	string text() const;
	double betrag();
	double betrag() const;
	Komplex(double re=0, double im=0) {
		this->re = re;
		this->im = im;
		betragNeuBerechnen = true;
	}
	Komplex mul(const Komplex& z);
};

int main() {
	Komplex a{1.0,2.0};
	Komplex b{-3.0,-4.0};
	Komplex c;
	c = a.mul(b);
	cout << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}

double Komplex::betrag() {
	if(betragNeuBerechnen==true) {
		cout << "Betrag neu berechnen\n";
		betragWert = sqrt(re*re+im*im);	
		betragNeuBerechnen = false;
	}
	return betragWert;
}

double Komplex::betrag() const {
	return sqrt(re*re+im*im);
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}
