#pragma once
#include "FormImpl.h"
#include "AnzeigeRechteck.h"

class Rechteck : public FormImpl {
private:
	double _breite;
	double _hoehe;
	AnzeigeRechteck anzeige;
public:
	Rechteck(Welt& welt, const Vektor& x, const Vektor& v, double b, double h);
	~Rechteck() override;
	void anzeigen() const override { anzeige.anzeigen(*this); }
	virtual double breite() const { 
		return _breite; 
	}
	virtual double hoehe() const { 
		return _hoehe; 
	}
};
