#pragma once
#include "Abtastwert.h"
#include <cmath>
#include <sstream>
#include <vector>

class Signal {
private:
	std::vector<Abtastwert> werte;
	const double PI = 3.14159265358979323846;
public:
	size_t laenge() const { return werte.size(); }
	Abtastwert wert(size_t pos) const {
		return werte[pos];
	}
	void generieren(size_t N, double f) {
		werte.clear();
		for(unsigned int n=0; n<N; n++) {
			const double arg = 2*PI*f*n/N;
			werte.push_back(Abtastwert{1.0*n,Komplex{cos(arg),sin(arg)}});
		}
	}
	std::string text() {
		std::stringstream s;
		for(auto a : werte) { s << a.text() << "\n"; }
		return s.str();
	}	
};
