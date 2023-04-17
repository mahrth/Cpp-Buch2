#include "Diagramm.h"
#include "Signal.h"
#include <fstream>
#include <iostream>
using namespace std;

void Diagramm::erstellen(const Signal& signal, const string& titel, const string& xAchse, const string& yAchse) {
	const string dateinameWerte = titel + ".dat";
	const string dateinameGnuplot = titel + ".gp";
	const string dateinamePdf = titel + ".pdf";
	signalSpeichern(signal, dateinameWerte);
	schreibeGnuplotParameter(dateinameGnuplot, dateinameWerte, dateinamePdf, titel, xAchse, yAchse);
	starteGnuplot(dateinameGnuplot);
}

void Diagramm::signalSpeichern(const Signal& signal, const string& dateiname) {
	ofstream os(dateiname);
	for(unsigned int n=0; n<signal.laenge(); n++) {
		Wertepaar wert = signal.wert(n);
		os << wert.x << " " << wert.y.real() << " " << wert.y.imag() << endl;
	}
	os.close();	
}

void Diagramm::schreibeGnuplotParameter(const string& dateinameParameter, const string& dateinameWerte, const string& dateinamePdf, const string& titel, const string& xAchse, const string& yAchse) {
	ofstream os(dateinameParameter);
	os << "set grid\n"
			<< "set title '" << titel << "'\n"
			<< "set xlabel '" << xAchse << "'\n"
			<< "set ylabel '" << yAchse << "'\n"
			<< "set terminal pdf\n"
			<< "set output '" << dateinamePdf << "'\n"
			<< "plot '" << dateinameWerte << "' using 1:2 title 'real' lc rgb 'black' with linespoints"
			<< ",\\\n'" << dateinameWerte << "' using 1:3 title 'imag' lc rgb 'black' dashtype '-' with linespoints"
			<< endl;
	os.close();
}

void Diagramm::starteGnuplot(const string& dateiname) {
	string kommando = "gnuplot " + dateiname;
	int ret = system(kommando.c_str());
	if(ret!=0) {
		cerr << "Fehler beim Ausführen von " << kommando;
	}	
}
