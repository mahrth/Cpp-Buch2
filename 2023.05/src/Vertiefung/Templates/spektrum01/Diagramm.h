#pragma once
#include <string>
class Signal;

class Diagramm {
private:
	using S = const std::string;
	static void signalSpeichern(const Signal&, S& name);
	static void schreibeGnuplotParameter(S& namePar, S& nameWert, S& namePdf, S& titel, S& xAchse, S& yAchse);
	static void starteGnuplot(S& name);
public:	
	static void erstellen(const Signal&, S& titel, S& xAchse, S& yAchse);
};
