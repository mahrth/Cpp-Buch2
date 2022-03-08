#pragma once

class Stapel {
public:
	using T = int; 
	Stapel() : anzahl(0) {}
	bool auflegen(const T&); 
	bool abheben(T&); 
private:
	static const int N = 3;
	T elemente[N]; 
	int anzahl;
};
