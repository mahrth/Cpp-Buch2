#include <iostream>
using namespace std;

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
};

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}

int main() {
	Komplex k1{1,2}, k2{3,4};
	cout << "k1 = " << k1 << ", k2 = " << k2 << endl; 
}


