#pragma once
#include "Komplex.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

struct Vektor {
	std::vector<double> daten;
	explicit Vektor(const Komplex& k) {
		std::cout << "Konstruktor Vektor\n";
		daten.push_back(k.re);
		daten.push_back(k.im);
	}
	std::string text() const {
		std::stringstream s;
		s << "[ ";
		for(auto e : daten) {
			s << e << " ";
		}
		s << "]";
		return s.str();
	}
};



