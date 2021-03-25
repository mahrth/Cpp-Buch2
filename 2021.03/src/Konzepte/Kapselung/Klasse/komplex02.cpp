#include <iostream>
using namespace std;

struct Komplex {
	double re;
	double im;
};

void ausgebenKomplex(const Komplex& k) {
	cout << k.re << ((k.im<0)?"":"+") << k.im << "i";
}

Komplex mulKomplex(const Komplex& z1, const Komplex& z2) {
	Komplex s;
	s.re = z1.re*z2.re - z1.im*z2.im;
	s.im = z1.re*z2.im + z1.im*z2.re;
	return s;
}

int main() {
	Komplex a = {1.0,-2.0};
	cout << "a = ";
	ausgebenKomplex(a);
	Komplex b = {3.0,-4.0};
	cout << "\nb = ";
	ausgebenKomplex(b);	
	Komplex c = mulKomplex(a,b);
	cout << "\nc = ";
	ausgebenKomplex(c);
	cout << endl;
}

