#include "Stern.h"
using namespace std;

Stern::Stern(const string& name) : _name(name) {}
string Stern::name() const {
	return _name;
}
