#pragma once 
#include "Mond.h"
#include "Himmelskoerper.h"
#include <string>
#include <vector>

class Planet : public Himmelskoerper {
private:
	std::vector<const Mond*> mond; 
public:
	Planet(const std::string& n, double m, double u, double di, double du) : Himmelskoerper(n,m,u,di,du) {}
	void fuegeHinzu(const Mond& m);
	std::string text() const; 
};
