#pragma once
#include "Himmelskoerper.h"
#include <string>

class Stern : public Himmelskoerper {
private:
	const double _leistung;
public:
	Stern(const std::string& n, double m, double u, double di, double du, double l) : Himmelskoerper(n,m,u,di,du), _leistung(l) {}
	double leistung() const { return _leistung ; }
	std::string text() const; 
};
