#include "Sonnensystem.h" 
#include <sstream>
using namespace std;

void Sonnensystem::fuegeHinzu(const Planet& p) {
	planet.push_back(&p);
}

void Sonnensystem::fuegeHinzu(const Stern& s) {
	stern.push_back(&s);
}

void Sonnensystem::fuegeHinzu(const Asteroid& a) {
	asteroid.push_back(&a);;
}

string Sonnensystem::text() const {
	const string tab = "-";
	stringstream t;
	t << "Sterne:\n";
	for(auto s : stern) {
		t << tab << " " << s->text() << endl;
	} 
	t << "Planeten:\n";
	int i=1; 
	for(auto p : planet) {
		t << tab << " " << i++ << ". Planet: " << p->text();
	}
	t << "Asteroiden:\n";
	for(auto a : asteroid) {
		t << tab << " " << a->text() << endl;
	} 
	return t.str();
}
