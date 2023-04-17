#include "SternNummeriert.h"
using namespace std;

int Stern::nSterne = 0;

Stern::Stern(const string& name) : _name(name) {}
string Stern::name() const {
	return _name;
}
