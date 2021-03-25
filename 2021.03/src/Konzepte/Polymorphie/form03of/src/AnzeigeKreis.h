#pragma once
#include "ofGraphics.h"
class Kreis;

class AnzeigeKreis {
private:
	ofColor farbe;
public:
	AnzeigeKreis();
	void anzeigen(const Kreis& kreis) const;
};
