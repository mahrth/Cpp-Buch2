#pragma once
class Vektor;

struct Form {
	virtual ~Form() {}
	virtual Vektor position() const = 0;
	virtual Vektor geschwindigkeit() const = 0;
	virtual void bewegen(double dt) = 0;
	virtual void anzeigen() const = 0;
};
