#pragma once
#include "AnzeigeWesen.h"
#include "ofColor.h"
class Wesen;

class AnzeigeFressen : public AnzeigeWesen {
private:
	static const ofColor _farbe;
protected:
	virtual const ofColor& farbe() const;
public:
	AnzeigeFressen(Wesen& wesen) : AnzeigeWesen(wesen) {}
	virtual void anzeigen(float dt) override;
};
