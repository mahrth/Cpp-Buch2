#pragma once 
#include <string>

class Himmelskoerper {
private:
	const std::string _name;
	const double _masse, _umlaufradius, _dichte, _durchmesser;
public:
	Himmelskoerper(const std::string&, double, double, double, double); 
	std::string name() const { return _name; }
	double masse() const { return _masse; }
	double umlaufradius() const { return _umlaufradius; }
	double dichte() const { return _dichte; }
	double durchmesser() const { return _durchmesser; }
	std::string text() const; 
};
