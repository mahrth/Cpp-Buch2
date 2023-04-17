#pragma once
#include "Bewegung.h"
#include <random>
class Wesen;

class BewegungRuhe: public Bewegung {
private:
	Wesen& _wesen;
	static std::default_random_engine init;
	static std::uniform_real_distribution<float> verteilung;
public:
	BewegungRuhe(Wesen& wesen): _wesen(wesen) {}
    void bewegen(float dt) override;
};
