#include "MeinOstream.h"

struct Komplex {
	double re, im;
	explicit Komplex(double re, double im);
};

mnr::MeinOstream& operator<<(mnr::MeinOstream&, const Komplex&);
