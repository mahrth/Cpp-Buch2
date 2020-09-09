#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re, im, betragWert;
	bool betragNeuBerechnen;
public:	
	Komplex() = default;
	Komplex(double re, double im) {
		this->re = re;
		this->im = im;
		betragNeuBerechnen = true;
	}
	string text() const;
	double betrag();
	double betrag() const;
	Komplex mul(const Komplex& z) {
		Komplex s;
		s.re = re*z.re - im*z.im;
		s.im = re*z.im + im*z.re;
		return s;
	}
};

int main() {
	Komplex a{1.0,2.0}, b{-3.0,-4.0}, c;
	cout << "a = " << a.text();
	cout << "\nb = " << b.text();
	c = a.mul(b);
	cout << "\nc = " << c.text() << endl;	
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
