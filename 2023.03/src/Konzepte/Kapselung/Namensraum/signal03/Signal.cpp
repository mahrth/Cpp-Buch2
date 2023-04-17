#include "Signal.h"
#include <sstream>

namespace Signalverarbeitung{
	std::string Signal::text() const{
		std::stringstream s;
		s << "[ ";
		for(auto d : daten) { s << d << " "; }
		s << "]";
		return s.str();
	}	
}
