#include <iostream>
using namespace std;

struct Komplex {
	double re;
	double im;
	
	void ausgeben() {
		cout << re << ((im<0)?"":"+") << im << "i";
	}
	
	Komplex mul(const Komplex& z) {
		Komplex s;
		s.re = re*z.re - im*z.im;
		s.im = re*z.im + im*z.re;
		return s;
	}
};

int main() {
	Komplex a = {1.0,2.0};
	cout << "a = ";
	a.ausgeben();
	Komplex b = {3.0,4.0};
	cout << "\nb = ";
	b.ausgeben();	
	Komplex c = a.mul(b);
	cout << "\nc = ";
	c.ausgeben();
	cout << endl;
}

