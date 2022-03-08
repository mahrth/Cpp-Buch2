#pragma once
#include "FormImpl.h"

class Rechteck : public FormImpl {
private:
	double _breite;
	double _hoehe;
public:
	Rechteck(const Vektor& x, const Vektor& v, double b, double h);
	~Rechteck() override;
	virtual double breite() const { return _breite; }
	virtual double hoehe() const { return _hoehe; }
	void anzeigen() const override;
};
