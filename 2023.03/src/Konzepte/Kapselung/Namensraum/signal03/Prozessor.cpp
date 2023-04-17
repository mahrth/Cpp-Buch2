#include "Prozessor.h"
#include "Signal.h"

namespace Signalverarbeitung {
	Signal Prozessor::verarbeiten(const Signal& eingang) const{
		Signal ausgang;
		for(int i=0; i<eingang.anzahl(); i++){
			ausgang.anhaengen(-eingang.wert(i)); 
		}
		return ausgang;		
	}
}
