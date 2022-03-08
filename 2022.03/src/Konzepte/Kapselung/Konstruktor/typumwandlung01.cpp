#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {
	double re, im;
	Komplex(double re=0, double im=0) : re(re), im(im) {
		cout << "Konstruktor Komplex\n";
	}
	string text() const;
};

void f(const Komplex& k) {
	cout << "f() empfängt " << k.text() << endl;
}

int main() {
	Komplex k = 1;
	cout << "k = " << k.text() << endl;
	k = 3;
	cout << "k = " << k.text() << endl;
	f(5);
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}
