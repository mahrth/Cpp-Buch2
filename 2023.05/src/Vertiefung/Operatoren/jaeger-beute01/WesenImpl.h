#pragma once
#include "Wesen.h"
#include "Vektor.h"
#include <random>
#include <sstream>

class WesenImpl : public Wesen {
private:
	const int _id;
	Welt& _welt;
	float _energie;
	Vektor _position, _geschwindigkeit;
	float _sichtradius;
	std::stringstream _ausgabe;
	static int objektZaehler;
	static std::default_random_engine init;
	static std::uniform_real_distribution<float> verteilung;
	void untersucheUmfeld(Wesen*& _naehestesStaerkereWesen, Wesen*& _naehestesSchwaecheresWesen);
	void fliehen(Wesen& jaeger, float dt);
	void jagen(Wesen& jaeger, float dt);
	void ruhen(float dt);
public:
	WesenImpl(Welt& welt, const Vektor& position, const Vektor&  geschwindigkeit, float energie, float sichtweite);
	virtual ~WesenImpl() override {}
    virtual int id() const override { return _id; }
    virtual void naechsterSchritt(float dt) override;
	virtual void anzeigen() override;
	virtual const Vektor& position() const override { return _position; }
	virtual float energie() const override { return _energie; }
	virtual float sichtradius() const override { return _sichtradius; }
	virtual void energieAendern(float deltaEnergie) override { _energie += deltaEnergie; }
	virtual bool operator>(const Wesen& w) const override {
		return _energie > w.energie();
	}
	virtual bool operator<(const Wesen& w) const override {
		return _energie < w.energie();
	}
	virtual bool operator>=(const Wesen& w) const override {
		return _energie >= w.energie();
	}
	virtual bool operator<=(const Wesen& w) const override {
		return _energie <= w.energie();
	}
	virtual bool operator==(const Wesen& w) const override {
		return _energie == w.energie();
	}
};

std::ostream& operator<<(std::ostream&, const Wesen&);

