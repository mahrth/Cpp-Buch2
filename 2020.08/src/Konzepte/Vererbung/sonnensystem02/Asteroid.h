#pragma once 
#include "Himmelskoerper.h"
#include <string>

class Asteroid : public Himmelskoerper {
private:
public:
	Asteroid(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser); 
	std::string text() const; 
};
