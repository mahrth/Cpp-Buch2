#pragma once
#include "AnzeigeWesen.h"
#include <SFML/Graphics.hpp>
class Wesen;

class AnzeigeFlucht : public AnzeigeWesen {
private:
	static const sf::Color _farbe;
protected:
	virtual const sf::Color& farbe() const;
public:
	AnzeigeFlucht(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
