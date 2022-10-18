#include "Prozessor.h"

namespace Signalverarbeitung {
	Signal Prozessor::verarbeiten(const Signal& ein) const{
		Signal aus;
		for(unsigned int i=0; i<ein.anzahl(); i++){
			aus.anhaengen(-ein.wert(i)); 
		}
		return aus;		
	}
}
