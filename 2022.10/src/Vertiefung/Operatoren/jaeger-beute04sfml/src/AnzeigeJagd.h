#pragma once
#include "AnzeigeWesen.h"
#include <SFML/Graphics.hpp>
class Wesen;

class AnzeigeJagd : public AnzeigeWesen {
private:
	static const sf::Color _farbe;
protected:
	virtual const sf::Color& farbe() const;
public:
	AnzeigeJagd(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
