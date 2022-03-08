#pragma once
#include "Planet.h" 
#include "Stern.h" 
#include "Asteroid.h" 
#include <list>
#include <string>
#include <vector>

class Sonnensystem {
private:
	std::list<const Stern*> stern; 
	std::vector<const Planet*> planet; 
	std::list<const Asteroid*> asteroid; 
public:
	explicit Sonnensystem(const Stern& stern);
	void fuegeHinzu(const Planet& p); 
	void fuegeHinzu(const Stern& s); 
	void fuegeHinzu(const Asteroid& s); 
	std::string text() const; 
};
