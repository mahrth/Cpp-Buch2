#pragma once
#include <sstream>
#include <string>
using namespace std;

class Vektor {
private:
	double _x, _y;
public:
	explicit Vektor(double x=0, double y=0) : _x(x), _y(y) {}	
	double x() const { return _x; } 	
	double y() const { return _y; } 	
	Vektor add(const Vektor& v) const {
		return Vektor(_x+v._x, _y+v._y);
	}
	Vektor mul(double d) const {
		return Vektor(_x*d, _y*d);
	}
	string text() const {
		stringstream s;
		s << "(" << _x << "," << _y << ")";
		return s.str();
	}
};
