#pragma once

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
};

Komplex operator*(const Komplex&, double);
Komplex operator*(double, const Komplex&);
Komplex operator*(const Komplex&, const Komplex&);
