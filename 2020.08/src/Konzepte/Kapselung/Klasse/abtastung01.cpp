#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {	
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	string text();
	void wert(double r, double i);
	double real() {	return re; }
	double imag() {	return im; }
	Komplex mul(const Komplex& z);
	double betrag();
};

struct Abtastwert {	
	double t;	
	Komplex amp; 	
	string text() {
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

string Komplex::text() {
	stringstream s;
	s << re << " + " << im << "i";
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
