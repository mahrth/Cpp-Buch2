#pragma once
#include "AnzeigeWesen.h"
#include "ofColor.h"
class Wesen;

class AnzeigeJagd : public AnzeigeWesen {
private:
	static const ofColor _farbe;
protected:
	virtual const ofColor& farbe() const;
public:
	AnzeigeJagd(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
