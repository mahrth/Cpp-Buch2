#include "Mond.h"
#include <sstream>
using namespace std;

Mond::Mond(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : _name(name), _masse(masse), _umlaufradius(umlaufradius), _dichte(dichte), _durchmesser(durchmesser) {}

string Mond::text() const {
	stringstream s;
	s << _name << " " << _umlaufradius << " AE";
	return s.str();
}
