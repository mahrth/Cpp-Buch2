#include "Stapel.h"
#include <iostream>
using namespace std;

bool Stapel::auflegen(const T& element) {
	bool aufgelegt = false;
	if (anzahl < N) {
		cout << "auflegen(" << element << ")\n";
		elemente[anzahl++] = element;
		aufgelegt = true;
	}
	return aufgelegt;
}

bool Stapel::abheben(T& element) {
	bool abgehoben = false;
	if (anzahl > 0) {
		element = elemente[--anzahl];
		cout << "abheben(" << element << ")\n";
		abgehoben = true;
	}
	return abgehoben;
}
