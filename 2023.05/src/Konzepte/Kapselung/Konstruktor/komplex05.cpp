#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {
	double re, im;
	Komplex(double re, double im) {
		cout << "Komplex(double,double)\n";
		this->re = re;
		this->im = im;
	}
	Komplex(double d) : Komplex(d,d) {
		cout << "Komplex(double)\n";
	}
	string text() const;
};

int main() {
	Komplex k{1.0};
	cout << "k = " << k.text() << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}
