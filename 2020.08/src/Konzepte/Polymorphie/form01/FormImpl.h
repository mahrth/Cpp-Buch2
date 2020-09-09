#pragma once
#include "Form.h"
#include "Vektor.h"

class FormImpl : public Form{
private:
	Vektor _position;
	Vektor _geschwindigkeit;
public:
	FormImpl(const Vektor& position, const Vektor& geschwindigkeit);
	~FormImpl() override;
	Vektor position() const override {
		return _position; 
	}
	Vektor geschwindigkeit() const override {
		return _geschwindigkeit; 
	}
	void bewegen(double dt) override;
};
