#pragma once
#include "Wertepaar.h"
#include <vector>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

class Signal {
public:
	using Paar = Wertepaar<double,Komplex>;
	Signal() {}
	Signal(size_t n, double m, double p);
	size_t laenge() const { return werte.size(); }
	Paar wert(size_t i) const { return werte[i]; }
	void hinzufuegen(const Paar& w) { werte.push_back(w); }
	Paar max();
	friend std::ostream& operator<<(std::ostream& os, const Signal& s);
private:
	std::vector<Paar> werte;
};

