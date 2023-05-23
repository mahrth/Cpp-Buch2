#include <iostream>
using namespace std;

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
};

istream& operator>>(istream& is, Komplex& k) {
	is >> k.re >> k.im;
	return is;
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}

int main() {
	Komplex k1, k2;
	cin >> k1 >> k2;
	cout << "k1 = " << k1 << endl; 
	cout << "k2 = " << k2 << endl; 
}


