#pragma once
#include <string>

struct Komplex {
	double re, im;
	std::string text() const;
};
