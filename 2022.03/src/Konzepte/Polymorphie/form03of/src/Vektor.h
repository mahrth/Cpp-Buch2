#pragma once
#include <string>

class Vektor {
private:
	double _x, _y;
public:
	explicit Vektor(double x=0, double y=0) : _x(x), _y(y) {}	
	double x() const { return _x; } 	
	double y() const { return _y; } 	
	void x(double x) { _x = x; } 
	void y(double y) { _y = y; } 
	Vektor add(const Vektor& v) const {
		return Vektor(_x+v._x, _y+v._y);
	}
	Vektor mul(double d) const {
		return Vektor(_x*d, _y*d);
	}
	std::string text() const;
};
