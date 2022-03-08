#pragma once
#include "Anzeige.h"
#include <SFML/Graphics.hpp>
class Wesen;

class AnzeigeWesen: public Anzeige {
protected:
	Wesen& wesen;
	virtual const sf::Color& farbe() const = 0;
public:
	AnzeigeWesen(Wesen& wesen) : wesen(wesen) {}
	virtual void anzeigen(float dt);
};
