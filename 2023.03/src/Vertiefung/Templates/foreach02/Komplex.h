#pragma once
#include <iostream>

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	explicit operator double() const;
	bool operator<(const Komplex&) const;
	bool operator>(const Komplex&) const;
};

std::ostream& operator<<(std::ostream&, const Komplex&);
