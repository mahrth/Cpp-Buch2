#pragma once
#include "Anzeige.h"
#include "Bewegung.h"
#include "WesenImpl.h"

class Zustand {
private:
	Wesen* _naehestesStaerkereWesen = nullptr;
	Wesen* _naehestesSchwaecheresWesen = nullptr;
	Anzeige* anzeige;
protected:
	WesenImpl& wesen;
	virtual void untersucheUmfeld();
	virtual Wesen* naehestesStaerkereWesen() { return _naehestesStaerkereWesen; }
	virtual Wesen* naehestesSchwaecheresWesen() { return _naehestesSchwaecheresWesen; }
	virtual Bewegung& bewegung() = 0;
public:
	Zustand(WesenImpl& w, Anzeige* a) : anzeige(a), wesen(w) {}
	virtual ~Zustand() {
		if(anzeige!=nullptr) { delete anzeige; }
	}
	virtual void naechsterSchritt(float dt) = 0;
	virtual void anzeigen(float dt) { anzeige->anzeigen(dt); }
	virtual void bewegen(float dt) { bewegung().bewegen(dt); }
};
