#pragma once
#include <iostream>

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	Komplex operator*(const Komplex&) const;
};

std::ostream& operator<<(std::ostream&, const Komplex&);
Komplex operator*(const Komplex&, const double); 
Komplex operator*(const double, const Komplex&); 
