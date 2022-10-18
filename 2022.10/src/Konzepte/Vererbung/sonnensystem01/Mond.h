#pragma once 
#include <string>

class Mond {
private:
	const std::string _name;
	const double _masse;
	const double _umlaufradius;
	const double _dichte;
	const double _durchmesser;
public:
	Mond(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser); 
	std::string name() const { return _name; }
	double masse() const { return _masse; }
	double umlaufradius() const { return _umlaufradius; }
	double dichte() const { return _dichte; }
	double durchmesser() const { return _durchmesser; }
	std::string text() const; 
};
