#pragma once
#include "Form.h"

class Kreis : public Form {
private:
	int radius;
public:
	Kreis(const Vektor& p, const Vektor& g, int r) : Form(p,g), radius(r) {}
	void zeichnen() const {
		cout << "Zeichne Kreis mit Mittelpunkt an Position " << position().text() << " und Radius " << radius << endl;
	}
};
