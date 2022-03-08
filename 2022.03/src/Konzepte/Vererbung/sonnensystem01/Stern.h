#pragma once
#include <string>

class Stern {
private:
	const std::string _name;
	const double _masse;
	const double _umlaufradius;
	const double _dichte;
	const double _durchmesser;
	const double _fusionsleistung;
public:
	Stern(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser, double fusionsleistung);
	std::string name() const { return _name; };
	double masse() const { return _masse; };
	double umlaufradius() const { return _umlaufradius; }; 
	double dichte() const { return _dichte; }
	double durchmesser() const { return _durchmesser; }
	double fusionsleistung() const { return _fusionsleistung ; }
	std::string text() const; 
};
