#include "Prozessor.h"

Signal Prozessor::verarbeiten(const Signal& ein) const{
	Signal aus;
	for(size_t i=0; i<ein.anzahl(); i++) {
		aus.anhaengen(-ein.wert(i));
	}
	return aus;		
}
