#pragma once
#include <iostream>
#include <string>
#include <sstream>

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {
		std::cout << "Konstruktor Komplex\n";
	}
	std::string text() const {
		std::stringstream s;
		s << re << " + " << im << "i";
		return s.str();
	}
};
