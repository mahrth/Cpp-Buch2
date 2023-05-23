#pragma once
#include <iostream>

template<typename T, const unsigned int N>
class Stapel {
private:
	T elemente[N];
	unsigned int anzahl;
public:
	Stapel() : anzahl(0) {}
	Stapel(const Stapel&);
	template<typename S, const unsigned int M> Stapel(const Stapel<S,M>&);
	bool auflegen(const T&);
	bool abheben(T&);
	template <typename S, const unsigned int M> friend std::ostream& operator<<(std::ostream&, const Stapel<S,M>&);
	template <typename, const unsigned int> friend class Stapel;
};

template<typename T, const unsigned int N>
Stapel<T,N>::Stapel(const Stapel& s) : anzahl(s.anzahl) {
	std::cout << "\nStapel<T,N>::Stapel(const Stapel&)";
	for(unsigned int i=0; i<anzahl; i++) {
		elemente[i] = s.elemente[i];
	}
}

template<typename T, const unsigned int N>
template<typename S, const unsigned int M> Stapel<T,N>::Stapel(const Stapel<S,M>& s) {
	std::cout << "\nStapel<T,N>::Stapel(const Stapel<S,M>& s)";
	anzahl = 0;
	unsigned int n = (s.anzahl>N) ? N : s.anzahl;
	for(unsigned int i=0; i<n; i++) {
		elemente[i] = s.elemente[i];
		anzahl++;
	}	
}

template<typename T, const unsigned int N>
std::ostream& operator<<(std::ostream& os, const Stapel<T,N>& stapel) {
	os << "[ ";
	for(unsigned int i=0; i<stapel.anzahl; i++) {
		os << stapel.elemente[i] << " ";
	}
	os << "]";
	return os;
}

template<typename T, const unsigned int N> 
bool Stapel<T, N>::auflegen(const T& e) {
	bool aufgelegt = false;
	if (anzahl < N) {
		std::cout << "auflegen(" << e << ")\n";
		elemente[anzahl++] = e;
		aufgelegt = true;
	}
	return aufgelegt;
}

template<typename T, const unsigned int N>
bool Stapel<T,N>::abheben(T& e) {
	bool abgehoben = false;
	if (anzahl > 0) {
		e = elemente[--anzahl];
		std::cout << "abheben(" << e << ")\n";
		abgehoben = true;
	}
	return abgehoben;
}
