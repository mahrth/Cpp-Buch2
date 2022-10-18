#include "Planet.h"
#include <sstream>
using namespace std;

namespace Astro {
	Planet::Planet(const string& name, double umlaufradius) : _name(name), _umlaufradius(umlaufradius) {}
	string Planet::name() const {
		return _name;
	}
	double Planet::umlaufradius() const {
		return _umlaufradius;
	}
	string Planet::text() const {
		stringstream s;
		s << _name << " " << _umlaufradius << " AE";
		return s.str();
	}
}
