#pragma once
#include "Bewegung.h"
class Wesen;

class BewegungStillstand: public Bewegung {
private:
	Wesen& _wesen;
public:
	BewegungStillstand(Wesen& wesen): _wesen(wesen) {}
    void bewegen(float dt) override;
};
