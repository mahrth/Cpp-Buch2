#pragma once
#include "Form.h"

class Rechteck  : public Form {
private:
	int breite;
	int hoehe;
public:
	Rechteck(const Vektor& p, const Vektor& g, int b, int h) : Form(p,g), breite(b), hoehe(h) {}
	void zeichnen() const {
		cout << "Zeichne Rechteck an Position " << position().text() << " und Breite " << breite << " und Hoehe " << hoehe << endl;
	}
};
