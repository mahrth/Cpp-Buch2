#pragma once
#include "BewegungStillstand.h"
#include "WesenImpl.h"
#include "Zustand.h"

class ZustandFressen: public Zustand {
private:
	BewegungStillstand* _bewegung;
	float zeitFressen;
	static const float zeitFressenMax;
protected:
	Bewegung& bewegung() override {return *_bewegung; }
public:
	ZustandFressen(WesenImpl& w);
	virtual ~ZustandFressen() {
		if(_bewegung!=nullptr) { delete _bewegung; }
	}
	void naechsterSchritt(float dt) override;
};
