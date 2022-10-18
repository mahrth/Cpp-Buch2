#include "Diagramm.h"
#include "GnuplotNichtGefunden.h"
#include <fstream>
using namespace std;

void Diagramm::erstellen(const Signal& signal, const string& name) {
	const string sw = name + ".dat";
	const string sg = name + ".gp";
	const string sp = name + ".pdf";
	try { signalSpeichern(signal, sw); }
	catch(const runtime_error& e) {
		throw runtime_error("Kann Signalwerte nicht in Datei " + sw + " schreiben.");
	}
	try { schreibeGnuplotParameter(sg, sw, sp); }
	catch(const runtime_error& e) {
		throw runtime_error("Kann Gnuplot-Konfiguration nicht in Datei " + sg + " schreiben.");
	}
	starteGnuplot(sg);
}

void Diagramm::signalSpeichern(const Signal& signal, const string& name) {
	ofstream os(name);
	os.exceptions(ofstream::failbit|ofstream::badbit);
	for(int n=0; n<signal.laenge(); n++) {
		Abtastwert wert = signal.wert(n);
		os << wert.t << " " << wert.amp.real() << " " << wert.amp.imag() << endl;
	}
	os.close();
}

void Diagramm::schreibeGnuplotParameter(const string& nameParameter, const string& nameWerte, const string& namePdf) {
	ofstream os(nameParameter);
	os.exceptions(ofstream::failbit|ofstream::badbit);
	os << "set grid\n"
			<< "set title 'Signal'\n"
			<< "set xlabel 'Zeit'\n"
			<< "set ylabel 'Amplitude'\n"
			<< "set terminal pdf\n"
			<< "set output '" << namePdf << "'\n"
			<< "plot '" << nameWerte << "' using 1:2 title 'real' lc rgb 'black' with linespoints"
			<< ",\\\n'" << nameWerte << "' using 1:3 title 'imag' lc rgb 'black' dashtype '-' with linespoints"
			<< endl
			;
	os.close();
}

void Diagramm::starteGnuplot(const string& name) {
	string kommando = "gnuplot " + name;
	int ret = system(kommando.c_str());
	if(ret==0) {
		cout << "Gnuplot fehlerfrei beendet\n";
	}
	else if(ret==-1) {
		throw runtime_error("Prozess kann nicht mit fork() gestartet werden.");
	}
	else if(WEXITSTATUS(ret)==127) {
		throw GnuplotNichtGefunden();
	}
	else {
		throw logic_error("Fehler beim Ausführen von Gnuplot");
	}	
}
