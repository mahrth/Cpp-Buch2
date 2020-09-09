#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {
		cout << "Konstruktor Komplex\n";
	}
	string text() const;
};

int main() {
	//Komplex k1 = 1;
	Komplex k2 = Komplex{1};
	cout << "k2 = " << k2.text() << endl;
	//k2 = 3;
	k2 = Komplex{2};
	cout << "k2 = " << k2.text() << endl;
	Komplex k3;
	cout << "k3 = " << k3.text() << endl;
	//Komplex k4 = {4.0,5.0};
	Komplex k5{6.0,7.0};
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}
