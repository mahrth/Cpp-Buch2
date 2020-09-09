#include "Sonnensystem.h" 
#include <sstream>
using namespace std;

Sonnensystem::Sonnensystem(const Stern& stern) {
	this->stern.push_back(&stern);
}
void Sonnensystem::fuegeHinzu(const Planet& p) {
	planet.push_back(&p);
}
void Sonnensystem::fuegeHinzu(const Stern& s) {
	stern.push_back(&s);
}
string Sonnensystem::text() const {
	stringstream t;
	t << "Sterne:\n";
	for(auto s : stern) {
		t << s->text() << endl;
	} 
	int i=1; 
	for(auto p : planet) {
		t << i++ << ". Planet: " << p->text() << endl;
	}
	return t.str();
}
