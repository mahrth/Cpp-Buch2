#pragma once
#include <iostream>

template<typename T=double, const int N=2>
class Stapel {
private:
	T elemente[N]; 
	int anzahl;
public:
	Stapel() : anzahl(0) {}
	bool auflegen(const T&); 
	bool abheben(T&); 
};

template<typename T, const int N> 
bool Stapel<T, N>::auflegen(const T& e) {
	bool aufgelegt = false;
	if (anzahl < N) {
		std::cout << "auflegen(" << e << ")\n";
		elemente[anzahl++] = e;
		aufgelegt = true;
	}
	return aufgelegt;
}

template<typename T, const int N>
bool Stapel<T,N>::abheben(T& e) {
	bool abgehoben = false;
	if (anzahl > 0) {
		e = elemente[--anzahl];
		std::cout << "abheben(" << e << ")\n";
		abgehoben = true;
	}
	return abgehoben;
}
