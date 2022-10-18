#pragma once
#include <string>

class Stern {
private:
	const std::string _name;
	static int nSterne;
public:
	explicit Stern(const std::string& name); 
	std::string name() const; 
	static int anzahlSterne() { return nSterne; }
};
