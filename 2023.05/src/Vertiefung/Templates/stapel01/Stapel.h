#pragma once

class Stapel {
private:
	static const int N = 3;
	double elemente[N];
	int anzahl;
public:
	Stapel() : anzahl(0) {}
	bool auflegen(const double &);
	bool abheben(double &);
};
