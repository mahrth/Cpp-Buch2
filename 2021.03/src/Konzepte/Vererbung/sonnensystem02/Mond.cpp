#include "Mond.h"
#include <sstream>
using namespace std;

Mond::Mond(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : Himmelskoerper(name, masse, umlaufradius, dichte, durchmesser) {}

string Mond::text() const {
	stringstream s;
	s << Himmelskoerper::text();
	return s.str();
}
