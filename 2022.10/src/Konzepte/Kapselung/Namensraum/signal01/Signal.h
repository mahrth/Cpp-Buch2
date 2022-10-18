#pragma once
#include <string>
#include <vector>

class Signal{
private:
	std::vector<double> daten;
public:
	Signal() {}
	size_t anzahl() const { return daten.size(); }
	double wert(const int i) const { return daten[i]; }
	void anhaengen(const double w) { daten.push_back(w); }
	std::string text() const;
};
