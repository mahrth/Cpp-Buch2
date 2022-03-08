#include "Komplex.h"
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}
