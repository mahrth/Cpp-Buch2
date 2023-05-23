#pragma once
#include <SFML/Graphics.hpp>
#include <random>

class Farbfabrik {
private:
    std::random_device init;
    std::mt19937* gen;
    std::uniform_int_distribution<int> dist{0, 255};
public:
    Farbfabrik() {
        gen = new std::mt19937(init());
    }
    Farbfabrik(const Farbfabrik&) = delete;
    ~Farbfabrik() {
        delete gen;
    }
    sf::Color zufallsFarbe() {
        return sf::Color(dist(*gen), dist(*gen), dist(*gen), dist(*gen));
    }
};

extern Farbfabrik farbfabrik;

