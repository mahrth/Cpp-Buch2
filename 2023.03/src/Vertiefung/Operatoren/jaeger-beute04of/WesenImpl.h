#pragma once
#include "Wesen.h"
#include "Vektor.h"
class Zustand;
class ZustandJagd;
class ZustandFlucht;
class ZustandFressen;
class ZustandRuhe;

class WesenImpl : public Wesen {
private:
	Welt& _welt;
	float _energie;
	Vektor _position, _geschwindigkeit;
	float _sichtradius;
	Zustand *_zustand;
	ZustandJagd* _zustandAngriff;
	ZustandFlucht* _zustandFlucht;
	ZustandFressen* _zustandFressen;
	ZustandRuhe* _zustandRuhe;
public:
	WesenImpl(Welt& welt, const Vektor& position, const Vektor&  geschwindigkeit, float energie, float sichtradius);
	~WesenImpl() override;
	void naechsterSchritt(float dt) override;
	void anzeigen(float dt) override;
	Vektor& position() override { return _position; }
	const Vektor& position() const override { return _position; }
	Vektor& geschwindigkeit() override { return _geschwindigkeit; }
	const Vektor& geschwindigkeit() const override { return _geschwindigkeit; }
	float energie() const override { return _energie; }
	float sichtradius() const override { return _sichtradius; }
	void energieAendern(float deltaEnergie) override { _energie += deltaEnergie; }
	Welt& welt() override { return _welt; }
	bool operator>(const Wesen& w) const override {
		return _energie > w.energie();
	}
	bool operator<(const Wesen& w) const override {
		return _energie < w.energie();
	}
	bool operator>=(const Wesen& w) const override {
		return _energie >= w.energie();
	}
	bool operator<=(const Wesen& w) const override {
		return _energie <= w.energie();
	}
	bool operator==(const Wesen& w) const override {
		return _energie == w.energie();
	}
	virtual void setzeZustandRuhe();
	virtual void setzeZustandAngriff(Wesen&);
	virtual void setzeZustandFlucht(Wesen&);
	virtual void setzeZustandFressen();
	virtual Zustand& zustand() { return *_zustand; }
};
