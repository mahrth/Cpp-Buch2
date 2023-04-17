#pragma once
#include "Vektor.h"
#include "Wesen.h"
#include <random>
#include "ofColor.h"
class Welt;

class WesenImpl : public Wesen {
private:
	Welt& _welt;
	float _energie, _sichtradius;
	Vektor _position, _geschwindigkeit;
	ofColor _farbe;
	static std::default_random_engine init;
	static std::uniform_real_distribution<float> verteilung;
	void untersucheUmfeld(Wesen*& jaeger, Wesen*& beute);
	void fliehen(Wesen& jaeger, float dt);
	void jagen(Wesen& jaeger, float dt);
	void ruhen(float dt);
public:
	WesenImpl(Welt& welt, const Vektor& position, const Vektor&  geschwindigkeit, float energie, float sichtradius);
	~WesenImpl() override = default;
	void naechsterSchritt(float dt) override;
	void anzeigen() override;
	const Vektor& position() const override { return _position; }
	float energie() const override { return _energie; }
	float sichtradius() const override { return _sichtradius; }
	void energieAendern(float deltaEnergie) override { _energie += deltaEnergie; }
	bool operator>(const Wesen& w) const override {
		return _energie > w.energie();
	}
	bool operator<(const Wesen& w) const override {
		return _energie < w.energie();
	}
};
