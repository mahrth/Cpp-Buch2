#pragma once
#include "Form.h"
#include "Welt.h"
#include "Vektor.h"

class FormImpl : public Form{
private:
	Welt& welt;
	Vektor _position;
	Vektor _geschwindigkeit;
	void abprallen();
public:
	FormImpl(Welt& welt, const Vektor& position, const Vektor& geschwindigkeit);
	~FormImpl() override;
	Vektor position() const override { return _position; }
	Vektor geschwindigkeit() const override { return _geschwindigkeit; }
	void bewegen(double dt) override;
};
