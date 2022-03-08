#pragma once

struct Anzeige {
	virtual ~Anzeige() {}
	virtual void anzeigen(float dt) = 0;
};




