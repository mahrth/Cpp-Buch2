#pragma once
#include "ofGraphics.h"
class Rechteck;

class AnzeigeRechteck {
private:
    ofColor farbe;
public:
    AnzeigeRechteck();
	void anzeigen(const Rechteck& rechteck) const;
};
