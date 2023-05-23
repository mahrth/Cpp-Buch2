#pragma once
#include <cmath>
#include <ostream>

class Komplex {
private:
	double re, im;
public:
	constexpr Komplex(double re=0, double im=0) : re{re},im{im}{}
	constexpr double real() const { return re; }/*§§*/
	constexpr double imag() const { return im; }/*§§*/
	constexpr Komplex operator*(const Komplex& z) const { return Komplex{re*z.re-im*z.im, re*z.im+im*z.re};	}
	constexpr Komplex operator+(const Komplex& z) const { return Komplex{re+z.re, im+z.im}; }
	constexpr double betrag() const { return sqrt(re*re+im*im); }
	friend std::ostream& operator<<(std::ostream& os, const Komplex& k);
};

