#pragma once 
#include <string>

class Planet {
private:
	const std::string _name;
	const double _umlaufradius;
public:
	Planet(const std::string& name, double umlaufradius); 
	std::string name() const; 
	double umlaufradius() const; 
	std::string text() const; 
};
