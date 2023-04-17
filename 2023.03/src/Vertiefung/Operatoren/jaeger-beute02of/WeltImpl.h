#pragma once
#include <random>
#include <vector>
#include "Welt.h"
class Wesen;

class WeltImpl : public Welt {
public:
	WeltImpl(float breite, float hoehe, int anzahlWesen);
	~WeltImpl() override;
	void naechsterSchritt(float dt) override;
	void anzeigen() override;
	void fressen(Wesen& jaeger, Wesen& beute) override;
	float fressAbstand() const override { return _fressAbstand; }
	float fressAbstandQuadrat() const override { return _fressAbstandQuadrat; }
	float breite() const override { return _breite; }
	float hoehe() const override { return _hoehe; }
	std::vector<Wesen*> wesenInSicht(const Wesen&) const override;
	size_t anzahlWesen() const override { return _wesen.size(); }
private:
	float _breite, _hoehe, _groesse, _fressAbstand, _fressAbstandQuadrat;
	std::vector<Wesen*> _wesen;
	Wesen* wesenErzeugen();
	void wesenVernichten(Wesen& w);
	static std::default_random_engine init;
	static std::uniform_real_distribution<float> verteilung;
};
