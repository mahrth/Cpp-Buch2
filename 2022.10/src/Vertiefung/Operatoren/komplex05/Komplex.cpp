#include "Komplex.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& is, Komplex& k) {
	is >> k.re >> k.im;
	return is;
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}
