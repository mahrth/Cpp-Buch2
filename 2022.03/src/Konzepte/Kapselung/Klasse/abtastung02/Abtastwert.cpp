#include "Abtastwert.h"
#include <sstream>
using namespace std;

string Abtastwert::text() const {
	stringstream s;
	s << t << ": " << amp.text();
	return s.str();
}
