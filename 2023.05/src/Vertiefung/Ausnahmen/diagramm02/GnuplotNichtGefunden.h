#pragma once
#include <stdexcept>

class GnuplotNichtGefunden : public std::runtime_error {
public:	
	GnuplotNichtGefunden() : std::runtime_error("Gnuplot nicht gefunden") {}
};
