#pragma once
#include "AnzeigeWesen.h"
#include <SFML/Graphics.hpp>
class Wesen;

class AnzeigeFressen : public AnzeigeWesen {
private:
	static const sf::Color _farbe;
protected:
	virtual const sf::Color& farbe() const;
public:
	AnzeigeFressen(Wesen& wesen) : AnzeigeWesen(wesen) {}
	virtual void anzeigen(float dt) override;
};
