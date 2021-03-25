#pragma once
#include "AnzeigeWesen.h"
#include "ofColor.h"
class Wesen;

class AnzeigeRuhe : public AnzeigeWesen {
private:
	static const ofColor _farbe;
protected:
	virtual const ofColor& farbe() const;
public:
	AnzeigeRuhe(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
