#pragma once
#include <iostream>

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
};
std::istream& operator>>(std::istream& is, Komplex& k);
std::ostream& operator<<(std::ostream& os, const Komplex& k);
