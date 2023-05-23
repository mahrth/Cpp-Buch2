#include "Signal.h"
#include <sstream>

std::string Signal::text() const {
	std::stringstream s;
	s << "[ ";
	for(auto d : daten) { s << d << " "; }
	s << "]";
	return s.str();
}	
