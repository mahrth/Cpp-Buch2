#pragma once
#include "Komplex.h"

struct Abtastwert {	
	double t;	
	Komplex amp; 	
	std::string text() const;
};
