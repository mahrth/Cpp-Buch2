#include "Asteroid.h"
#include <sstream>
using namespace std;

Asteroid::Asteroid(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : Himmelskoerper(name, masse, umlaufradius, dichte, durchmesser) {}

string Asteroid::text() const {
	stringstream s;
	s << Himmelskoerper::text();
	return s.str();
}
