#include <iostream>
#include <sstream>
using namespace std;

struct Komplex {
	double re, im;
	Komplex(double re=0, double im=0) : re(re), im(im){}
	string text() const;
};

int main() {
	Komplex a{1.0,2.0};
	cout << "a = " << a.text() << endl;
	Komplex b{a};
	cout << "b = " << b.text() << endl;
	Komplex c = a;
	cout << "c = " << c.text() << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}
