#pragma once
#include "BewegungFlucht.h"
#include "WesenImpl.h"
#include "Zustand.h"

class ZustandFlucht: public Zustand {
private:
	BewegungFlucht* _bewegung;
protected:
	Bewegung& bewegung() override {return *_bewegung; }
public:
	ZustandFlucht(WesenImpl& w);
	virtual ~ZustandFlucht() {
		if(_bewegung!=nullptr) { delete _bewegung; }
	}
	void naechsterSchritt(float dt) override;
	virtual void jaeger(Wesen& jaeger) { _bewegung->jaeger(&jaeger); }
};
