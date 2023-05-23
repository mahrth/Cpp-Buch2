#pragma once
#include <vector>
class Wesen;

struct Welt {
    virtual ~Welt() {}
	virtual void naechsterSchritt(float dt) = 0;
	virtual void anzeigen(float dt) = 0;
    virtual float breite() const = 0;
    virtual float hoehe() const = 0;
    virtual void fressen(Wesen& jaeger, Wesen& beute) = 0;
	virtual float fressAbstand() const = 0;
	virtual float fressAbstandQuadrat() const = 0;
	virtual std::vector<Wesen*> wesenInSicht(const Wesen&) const = 0;
	virtual size_t anzahlWesen() const = 0;
};




