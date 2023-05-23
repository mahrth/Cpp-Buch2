#include "Diagramm.h"
#include <fstream>
using namespace std;

void Diagramm::erstellen(const Signal& signal, const string& diagrammName) {
	const string dateinameWerte = diagrammName + ".dat";
	const string dateinameGnuplot = diagrammName + ".gp";
	const string dateinamePdf = diagrammName + ".pdf";
	signalSpeichern(signal, dateinameWerte);
	schreibeGnuplotParameter(dateinameGnuplot, dateinameWerte, dateinamePdf);
	starteGnuplot(dateinameGnuplot);
}

void Diagramm::signalSpeichern(const Signal& signal, const string& dateiname) {
	ofstream os(dateiname);
	for(int n=0; n<signal.laenge(); n++) {
		Abtastwert wert = signal.wert(n);
		os << wert.t << " " << wert.amp.real() << " " << wert.amp.imag() << endl;
	}
	os.close();	
}

void Diagramm::schreibeGnuplotParameter(const string& dateinameParameter, const string& dateinameWerte, const string& dateinamePdf) {
	ofstream os(dateinameParameter);
	os << "set grid\n"
			<< "set title 'Signal'\n"
			<< "set xlabel 'Zeit'\n"
			<< "set ylabel 'Amplitude'\n"
			<< "set terminal pdf\n"
			<< "set output '" << dateinamePdf << "'\n"
			<< "plot '" << dateinameWerte << "' using 1:2 title 'real' lc rgb 'black' with linespoints"
			<< ",\\\n'" << dateinameWerte << "' using 1:3 title 'imag' lc rgb 'black' dashtype '-' with linespoints"
			<< endl
			;
	os.close();
}

void Diagramm::starteGnuplot(const string& dateiname) {
	string kommando = "gnuplot " + dateiname;
	int ret = system(kommando.c_str());
	if(ret!=0) {
		fehlerMelden("Fehler beim Ausführen von " + kommando);
	}	
}

void Diagramm::fehlerMelden(const std::string& meldung) {
	cerr << meldung;
}
