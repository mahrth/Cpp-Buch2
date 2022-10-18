#include "Komplex.h"
#include <cmath>
using namespace std;

Komplex::operator double() const {
	return sqrt(re*re+im*im);
}

bool Komplex::operator<(const Komplex& k) const {
	double d1 = double(*this);
	double d2 = double(k);
	return (d1<d2);
}

bool Komplex::operator>(const Komplex& k) const {
	double d1 = double(*this);
	double d2 = double(k);
	return (d1>d2);
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << ((k.im<0)?"":"+") << k.im << "i";
	return os;
}
