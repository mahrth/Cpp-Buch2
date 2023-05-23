#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {
	double re, im;
	Komplex(double re=0.0, double im=0.0) : re(re), im(im) { 
		cout << "Komplex(double,double)  ";
	}
	Komplex(const Komplex& k) : re(k.re), im(k.im) {	 
		cout << "Komplex(const Komplex&) "; 
	}
	string text() const;
};

int main() {
	Komplex a(1.0,2.0);
	cout << "a = " << a.text() << endl;
	Komplex b{3.0,4.0};
	cout << "b = " << b.text() << endl;
	Komplex c = {5.0,6.0};
	cout << "c = " << c.text() << endl;
	Komplex d(a);
	cout << "d = " << d.text() << endl;
	Komplex e{b};
	cout << "e = " << e.text() << endl;
	Komplex f = a;
	cout << "f = " << f.text() << endl;
	Komplex g = {a};
	cout << "g = " << g.text() << endl;
	b.re = 3;
	cout << "b = " << b.text() << endl;
	cout << "a = " << a.text() << endl;
	a = b;
	cout << "a = " << a.text() << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}
