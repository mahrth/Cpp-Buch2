#pragma once
#include <string>

class Stern {
private:
	const std::string _name;
public:
	Stern(const std::string& name); 
	std::string name() const; 
};
