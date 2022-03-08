#include "Sonnensystem.h" 
#include <sstream>
using namespace std;

Sonnensystem::Sonnensystem(const Stern& stern) : zentralgestirn(stern) {}

void Sonnensystem::fuegeHinzu(const Planet& p) {
	planet.push_back(&p);
}
string Sonnensystem::text() const {
	stringstream t;
	t << "Zentralgestirn: " << zentralgestirn.name() << endl;
	int i=1; 
	for(auto p : planet) {
		t << i++ << ". Planet: " << p->text() << endl;
	}
	return t.str();
}
