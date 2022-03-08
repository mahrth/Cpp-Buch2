#pragma once
class Welt;
class Vektor;

struct Wesen {
    virtual ~Wesen() {}
    virtual Welt& welt() = 0;
    virtual void naechsterSchritt(float dt) = 0;
    virtual void anzeigen(float dt) = 0;
    virtual float energie() const = 0;
	virtual float sichtradius() const = 0;
	virtual Vektor& position() = 0;
	virtual const Vektor& position() const = 0;
	virtual Vektor& geschwindigkeit() = 0;
	virtual const Vektor& geschwindigkeit() const = 0;
    virtual void energieAendern(float delteEnergie) = 0;
	virtual bool operator>(const Wesen&) const = 0;
	virtual bool operator<(const Wesen&) const = 0;
	virtual bool operator>=(const Wesen&) const = 0;
	virtual bool operator<=(const Wesen&) const = 0;
	virtual bool operator==(const Wesen&) const = 0;
};
