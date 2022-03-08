#pragma once
#include "BewegungJagd.h"
#include "WesenImpl.h"
#include "Zustand.h"

class ZustandJagd: public Zustand {
private:
	BewegungJagd* _bewegung;
protected:
	Bewegung& bewegung() override {return *_bewegung; }
public:
	ZustandJagd(WesenImpl& w);
	virtual ~ZustandJagd() {
		if(_bewegung!=nullptr) { delete _bewegung; }
	}
	void naechsterSchritt(float dt) override;
	virtual void beute(Wesen& beute) { _bewegung->beute(&beute); }
};
