#pragma once
#include "Abtastwert.h"
#include <iostream>
#include <string>
#include <vector>

class Signal {
private:
	std::vector<Abtastwert> werte;
	const double PI = 3.14159265359;
public:
	Signal(const int n, const double freq, const double phase);
	int laenge() const;
	Abtastwert wert(const int pos) const;
};

std::ostream& operator<<(std::ostream&, const Signal&);


