#pragma once
#include <initializer_list>
#include <string>

class Vektor {
private:
	int* werte;
	unsigned int laenge, schreibPosition;
	std::string name;
public:	
	Vektor(const std::string&, std::initializer_list<int>);
	Vektor(const Vektor&);
	virtual ~Vektor();
	Vektor& operator=(const Vektor&);
};
