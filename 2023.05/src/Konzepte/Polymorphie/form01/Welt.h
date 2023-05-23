#pragma once
#include "Form.h"
#include <vector>

class Welt {
private:
	std::vector<Form*> form;
	double t = 0;
public:
	Welt(unsigned int anzahlFormen);
	virtual ~Welt();
	virtual double zeit() const final { return t; }		
	virtual void naechsterSchritt(double dt);
	virtual void anzeigen();
};
