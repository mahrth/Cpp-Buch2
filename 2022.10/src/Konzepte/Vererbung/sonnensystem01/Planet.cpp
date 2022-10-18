#include "Planet.h"
#include "Mond.h"
#include <sstream>
using namespace std;

Planet::Planet(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : _name(name), _masse(masse), _umlaufradius(umlaufradius), _dichte(dichte), _durchmesser(durchmesser) {}

void Planet::fuegeHinzu(const Mond& m) {
	mond.push_back(&m);
}

string Planet::text() const {
	stringstream s;
	s << _name <<", " << _masse << " Erdmassen, " << _umlaufradius << " AE, " << _dichte << " Erddichte, " << _durchmesser << " Erdradius"; 
	return s.str();
}
