#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re, im, betragWert;
	bool betragNeuBerechnen;
public:	
	Komplex(double re, double im) {
		cout << "Konstruktor wird aufgerufen\n";
		this->re = re;
		this->im = im;
		betragNeuBerechnen = true;
	}
	string text() const;
	double betrag();
	double betrag() const ;
};

int main() {
	Komplex k1(1.0, 2.0);
	cout << "k1 = " << k1.text() << endl;	
	Komplex k2 = {3.0, -4.0};
	cout << "k2 = " << k2.text() << endl;	
	Komplex k3{-5.0, -6.0};
	cout << "k3 = " << k3.text() << endl;	
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
