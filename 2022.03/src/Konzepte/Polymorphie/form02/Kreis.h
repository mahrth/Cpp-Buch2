#pragma once
#include "FormImpl.h"
#include "AnzeigeKreis.h"

class Kreis : public FormImpl {
private:
	double _radius;
	AnzeigeKreis anzeige;
public:
    Kreis(Welt& welt, const Vektor& position, const Vektor& geschwindigkeit, double radius);
	~Kreis() override;
	void anzeigen() const override { 
		anzeige.anzeigen(*this); 
	}
    virtual double radius() const { 
		return _radius; 
	}
};
