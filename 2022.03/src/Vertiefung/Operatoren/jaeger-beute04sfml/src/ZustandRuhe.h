#pragma once
#include "BewegungRuhe.h"
#include "WesenImpl.h"
#include "Zustand.h"

class ZustandRuhe: public Zustand {
private:
	BewegungRuhe* _bewegung;
protected:
	Bewegung& bewegung() override {return *_bewegung; }
public:
	ZustandRuhe(WesenImpl& w);
	virtual ~ZustandRuhe() {
		if(_bewegung!=nullptr) { delete _bewegung; }
	}
	void naechsterSchritt(float dt) override;
};
