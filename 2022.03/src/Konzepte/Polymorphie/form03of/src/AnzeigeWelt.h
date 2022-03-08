#pragma once
#include "ofTrueTypeFont.h"
class Welt;

class AnzeigeWelt {
private:
	const ofColor schriftfarbe;
	ofTrueTypeFont schriftart;
	const int schriftgroesse = 24;
public:
	AnzeigeWelt();
	void anzeigen(const Welt& welt) const;
};
