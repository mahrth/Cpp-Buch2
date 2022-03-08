#pragma once
#include "Bewegung.h"
class Wesen;

class BewegungFlucht: public Bewegung {
private:
	Wesen &_wesen, *_jaeger;
public:
	BewegungFlucht(Wesen& wesen) : _wesen(wesen), _jaeger(nullptr) {}
    virtual void bewegen(float dt) override;
	virtual void jaeger(Wesen* j) { _jaeger = j; }
	virtual Wesen* jaeger() const { return _jaeger; }
};
