#pragma once
#include "Welt.h"
#include "AnzeigeWelt.h"
#include "Vektor.h"
#include <vector>
class Form;

class WeltImpl : public Welt {
private:
	std::vector<Form*> form;
	double t = 0;
	const Vektor _abmessung;
	AnzeigeWelt anzeige;
public:
	WeltImpl(const Vektor& abmessung, unsigned int anzahlFormen);
	~WeltImpl() override;
	double zeit() const override { return t; }
	void naechsterSchritt(double dt) override;
	void anzeigen() override;
	const Vektor& abmessung() const override { return _abmessung; }
};
