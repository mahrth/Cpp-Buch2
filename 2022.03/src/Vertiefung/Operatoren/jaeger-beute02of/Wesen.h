#pragma once
class Vektor;

struct Wesen {
    virtual ~Wesen() {}
    virtual void naechsterSchritt(float dt) = 0;
	virtual void anzeigen() = 0;
	virtual float energie() const = 0;
	virtual float sichtradius() const = 0;
	virtual const Vektor& position() const = 0;
	virtual void energieAendern(float delteEnergie) = 0;
	virtual bool operator>(const Wesen&) const = 0;
	virtual bool operator<(const Wesen&) const = 0;
};
