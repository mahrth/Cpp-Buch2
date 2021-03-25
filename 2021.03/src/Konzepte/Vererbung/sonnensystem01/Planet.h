#pragma once 
#include "Mond.h"
#include <string>
#include <vector>

class Planet {
private:
	const std::string _name;
	const double _masse;
	const double _umlaufradius;
	const double _dichte;
	const double _durchmesser;
	std::vector<const Mond*> mond; 
public:
	Planet(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser); 
	std::string name() const { return _name; }
	double masse() const { return _masse; }
	double umlaufradius() const { return _umlaufradius; }
	double dichte() const { return _dichte; }
	double durchmesser() const { return _durchmesser; }
	void fuegeHinzu(const Mond& m);
	std::string text() const; 
};
