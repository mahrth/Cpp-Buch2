#pragma once
#include <string>

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	Komplex(double re=0, double im=0) : re{re}, im{im} {}
	std::string text();
	void wert(double r, double i);
	double real() {	return re; }
	double imag() {	return im; }
	Komplex mul(const Komplex& z);
	double betrag();
};
