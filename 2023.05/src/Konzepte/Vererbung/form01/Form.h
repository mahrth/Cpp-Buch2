#pragma once
#include <iostream>
#include "Vektor.h"
using namespace std;

class Form {
private:
	Vektor x;
	Vektor v;
public:
	Form(const Vektor& position, const Vektor& geschwindigkeit) : x(position), v(geschwindigkeit) {}
	Vektor position() const { return x; }
	void bewegen(double dt) {
		x = x.add(v.mul(dt));
	}
	void zeichnen() const {
		cout << "Zeichne Form an Position " << x.text();
	}
};
