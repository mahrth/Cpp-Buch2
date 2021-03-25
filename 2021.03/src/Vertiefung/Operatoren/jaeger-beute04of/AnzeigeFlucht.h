#pragma once
#include "AnzeigeWesen.h"
#include "ofColor.h"
class Wesen;

class AnzeigeFlucht : public AnzeigeWesen {
private:
	static const ofColor _farbe;
protected:
	virtual const ofColor& farbe() const;
public:
	AnzeigeFlucht(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
