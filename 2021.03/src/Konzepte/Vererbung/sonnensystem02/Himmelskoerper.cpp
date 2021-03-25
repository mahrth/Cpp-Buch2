#include "Himmelskoerper.h"
#include <sstream>
using namespace std;

Himmelskoerper::Himmelskoerper(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : _name(name), _masse(masse), _umlaufradius(umlaufradius), _dichte(dichte), _durchmesser(durchmesser) {}

string Himmelskoerper::text() const {
	stringstream s;
	s << _name << " R=" << _umlaufradius << " AE, m=" << _masse << ", d=" << _dichte << ", r=" << _durchmesser/2;
	return s.str();
}
