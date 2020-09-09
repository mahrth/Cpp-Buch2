#pragma once
#include <string>

class Komplex {
private:
	double re, im;
public:
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	explicit operator double() const;
	void wert(double r, double i);
	double real() const { return re; }
	double imag() const { return im; }
};

std::ostream& operator<<(std::ostream&, const Komplex&);
