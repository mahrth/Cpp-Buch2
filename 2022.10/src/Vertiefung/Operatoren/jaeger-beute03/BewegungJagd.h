#pragma once
#include "Bewegung.h"
class Wesen;

class BewegungJagd: public Bewegung {
private:
	Wesen &_wesen, *_beute;
public:
	BewegungJagd(Wesen& wesen) : _wesen(wesen), _beute(nullptr) {}
    virtual void bewegen(float dt) override;
	virtual void beute(Wesen* b) { _beute = b; }
	virtual Wesen* beute() const { return _beute; }
};

