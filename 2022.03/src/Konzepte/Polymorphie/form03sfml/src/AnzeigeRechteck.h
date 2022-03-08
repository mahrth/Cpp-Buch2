#pragma once
#include <SFML/Graphics.hpp>
class Rechteck;

class AnzeigeRechteck {
private:
    sf::Color farbe;
public:
    AnzeigeRechteck();
	void anzeigen(const Rechteck& rechteck) const;
};
