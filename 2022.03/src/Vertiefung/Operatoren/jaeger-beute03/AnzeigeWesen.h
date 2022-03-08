#pragma once
#include "Anzeige.h"
class Wesen;

class AnzeigeWesen: public Anzeige {
protected:
	Wesen& wesen;
public:
	AnzeigeWesen(Wesen& wesen) : wesen(wesen) {}
	virtual void anzeigen(float dt);
};
