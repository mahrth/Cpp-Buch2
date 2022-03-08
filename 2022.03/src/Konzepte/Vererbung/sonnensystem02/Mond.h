#pragma once 
#include "Himmelskoerper.h"
#include <string>

class Mond : public Himmelskoerper {
private:
public:
	Mond(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser); 
	std::string text() const; 
};
