#include "Komplex.h"

Komplex operator*(const Komplex& a, double d) {
	return Komplex{a.re*d, a.im*d};
}

Komplex operator*(double d, const Komplex& a) {
	return Komplex{a.re*d, a.im*d};
}

Komplex operator*(const Komplex& a, const Komplex& b) {
	return Komplex{a.re*b.re-a.im*b.im, a.re*b.im+a.im*b.re};
}
