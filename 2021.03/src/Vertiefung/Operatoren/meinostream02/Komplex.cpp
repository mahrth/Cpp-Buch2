#include "Komplex.h"
#include "MeinOstream.h"
using namespace mnr;

Komplex::Komplex(double re, double im) : re(re), im(im) {}

MeinOstream& operator<<(MeinOstream& mos, const Komplex& k) {
	mos << k.re << " + " << k.im << "i";
	return mos;
}
