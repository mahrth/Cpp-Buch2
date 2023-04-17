#pragma once
#include <random>
#include <vector>
#include "Welt.h"
class Wesen;

class WeltImpl : public Welt {
public:
	WeltImpl(float breite, float hoehe, int anzahlWesen);
	virtual ~WeltImpl() override;
	virtual void naechsterSchritt(float dt) override;
	virtual void anzeigen() override;
	virtual void fressen(Wesen& jaeger, Wesen& beute) override;
	virtual float fressAbstand() const override { return _fressAbstand; }
	virtual float fressAbstandQuadrat() const override { return _fressAbstandQuadrat; }
	virtual float breite() const override { return _breite; }
	virtual float hoehe() const override { return _hoehe; }
	virtual std::vector<Wesen*> wesenInSicht(const Wesen&) const override;
	virtual size_t anzahlWesen() const override { return _wesen.size(); }
private:
	float _breite, _hoehe, _groesse, _fressAbstand, _fressAbstandQuadrat;
	std::vector<Wesen*> _wesen;
	Wesen* wesenErzeugen();
	void wesenVernichten(Wesen& w);
	static std::default_random_engine init;
	static std::uniform_real_distribution<float> verteilung;
};
