#include <iostream>
using namespace std;

struct Komplex {
	double re;
	double im;	
	void ausgeben();
	Komplex mul(const Komplex& z);
};

void Komplex::ausgeben() {
	cout << re << ((im<0)?"":"+") << im << "i";
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

int main() {
	Komplex a = {1.0,2.0};
	Komplex b = {3.0,4.0};
	Komplex c = a.mul(b);
	cout << endl;
}

