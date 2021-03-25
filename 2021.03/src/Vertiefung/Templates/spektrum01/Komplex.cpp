#include "Komplex.h"
using namespace std;

ostream& operator<<(ostream& os, const Komplex& k) {
		os << k.real() << ((k.imag()<0)?"":"+") << k.imag() << "i";
		return os;
	}
