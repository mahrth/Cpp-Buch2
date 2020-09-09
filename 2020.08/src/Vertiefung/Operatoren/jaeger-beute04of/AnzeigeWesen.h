#pragma once
#include "Anzeige.h"
#include "ofColor.h"
class Wesen;

class AnzeigeWesen: public Anzeige {
protected:
	Wesen& wesen;
	virtual const ofColor& farbe() const = 0;
public:
	AnzeigeWesen(Wesen& wesen) : wesen(wesen) {}
	virtual void anzeigen(float dt);
};
