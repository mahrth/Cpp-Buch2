#include "Abtastwert.h"
#include <sstream>
using namespace std;

string Abtastwert::text() {
	stringstream s;
	s << t << ": " << amp.text();
	return s.str();
}
