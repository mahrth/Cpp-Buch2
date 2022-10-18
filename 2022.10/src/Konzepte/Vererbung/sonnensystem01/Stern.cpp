#include "Stern.h"
#include <sstream>
using namespace std;

Stern::Stern(const string& name, double masse, double umlaufradius, double dichte, double durchmesser, const double fusionsleistung) : _name(name), _masse(masse), _umlaufradius(umlaufradius), _dichte(dichte), _durchmesser(durchmesser), _fusionsleistung(fusionsleistung) {}

string Stern::text() const {
	stringstream s;
	s << _name << " " << _umlaufradius << " AE";
	return s.str();
}
