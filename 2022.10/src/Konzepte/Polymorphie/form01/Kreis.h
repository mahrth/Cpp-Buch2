#pragma once
#include "FormImpl.h"

class Kreis : public FormImpl {
private:
	double _radius;
public:
	Kreis(const Vektor& x, const Vektor& v, double r);
	~Kreis() override;
	virtual double radius() const { return _radius; };
	void anzeigen() const override;
};
