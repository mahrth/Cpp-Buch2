#include "Abtastwert.h"
#include <iostream>
using namespace std;

Abtastwert::Abtastwert(const Komplex& k, double t) : t(t), amp(k) {}

ostream& operator<<(ostream& os, const Abtastwert& a) {
	os << a.t << ": " << a.amp;
	return os;
}

