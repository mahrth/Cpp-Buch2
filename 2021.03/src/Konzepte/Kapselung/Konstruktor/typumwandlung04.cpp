#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct Komplex {
	double re, im;
	Komplex(double re=0, double im=0) : re(re), im(im) {
		cout << "Konstruktor Komplex\n";
	}
	string text() const;
};

struct Vektor {
	vector<double> daten;
	Vektor(Komplex k) {
		cout << "Konstruktor Vektor\n";
		daten.push_back(k.re);
		daten.push_back(k.im);
	}
	string text() const;
};

int main() {
	Komplex k = 3.0;
	Vektor v1 = k;
	cout << "v1 = " << v1.text() << endl;
	//Vektor v2 = 4.0;
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}

string Vektor::text() const {
	stringstream s;
	s << "( ";
	for(const auto d : daten) {
		s << d << " ";
	}
	s << ")";
	return s.str();
}
