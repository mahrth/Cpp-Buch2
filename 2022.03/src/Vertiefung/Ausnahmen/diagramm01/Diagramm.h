#pragma once
#include "Signal.h"
#include <string>

class Diagramm {
private:
	void signalSpeichern(const Signal& signal, const std::string& dateiname);
	void schreibeGnuplotParameter(const std::string& dateinameParameter, const std::string& dateinameWerte, const std::string& dateinamePdf);
	void starteGnuplot(const std::string& dateiname);
	void fehlerMelden(const std::string& meldung);
public:	
	void erstellen(const Signal& signal, const std::string& diagrammName);	
};
