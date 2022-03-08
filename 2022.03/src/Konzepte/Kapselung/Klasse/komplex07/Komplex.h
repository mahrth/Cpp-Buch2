#pragma once
struct Komplex {
	double re;
	double im;
	void ausgeben();	
	Komplex mul(const Komplex& z);
	double betrag();
};
