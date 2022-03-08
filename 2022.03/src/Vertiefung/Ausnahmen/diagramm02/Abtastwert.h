#pragma once
#include "Komplex.h"

struct Abtastwert {	
	const double t;	
	const Komplex amp; 	
	Abtastwert(const Komplex&, double t);
};

std::ostream& operator<<(std::ostream&, const Abtastwert&);
