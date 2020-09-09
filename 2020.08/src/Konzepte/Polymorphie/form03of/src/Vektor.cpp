#include "Vektor.h"
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

string Vektor::text() const {
	std::stringstream s;
	s << "(" << fixed << setprecision(1) << _x << ", " << _y << ")";
	return s.str();
}
