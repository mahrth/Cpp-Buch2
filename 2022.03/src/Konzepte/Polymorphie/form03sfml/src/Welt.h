#pragma once
class Vektor;

struct Welt {
	virtual ~Welt() {}
	virtual const Vektor& abmessung() const = 0;
	virtual double zeit() const = 0;
	virtual void naechsterSchritt(double dt) = 0;
	virtual void anzeigen() = 0;
};
