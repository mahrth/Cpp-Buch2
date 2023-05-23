#include "Planet.h"
#include "Mond.h"
#include <sstream>
using namespace std;

void Planet::fuegeHinzu(const Mond& m) {
	mond.push_back(&m);
}

string Planet::text() const {
	const string tab = "--";
	stringstream s;
	s << Himmelskoerper::text() << ", " << mond.size() << " Monde:\n";
	int i=1; 
	for(auto m : mond) {
		s << tab << " " << i++ << ". Mond: " << m->text() << endl;
	}	
	return s.str();
}
