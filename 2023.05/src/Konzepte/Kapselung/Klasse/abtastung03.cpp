#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	string text() const;
	void wert(double r, double i);
	double real() const { return re; }
	double imag() const { return im; }
	Komplex mul(const Komplex& z) const;
	double betrag();
	double betrag() const;
};

struct Abtastwert {	
	double t;	
	Komplex amp; 	
	string text() const;
};

class Signal {
private:
	vector<Abtastwert> werte;
	const double PI = 3.14159265359;
public:
	size_t laenge() const;
	Abtastwert wert(const int pos) const;
	void generieren(const unsigned int N, const double FREQ);
	string text() const;
};

void signalSpeichern(const Signal& signal, const string& dateiname) {
	ofstream os(dateiname);
	for(unsigned int n=0; n<signal.laenge(); n++) {
		Abtastwert wert = signal.wert(n);
		os << wert.t << " " << wert.amp.real() << " " << wert.amp.imag() << endl;
	}
	os.close();	
}

void schreibeGnuplotParameter(const string& dateinameParameter, const string& dateinameWerte, const string& dateinamePdf) {
	ofstream os(dateinameParameter);
	os << "set grid\n"
			<< "set title 'Signal'\n"
			<< "set xlabel 'Zeit'\n"
			<< "set ylabel 'Amplitude'\n"
			<< "set terminal pdf\n"
			<< "set output '" << dateinamePdf << "'\n"
			<< "plot '" << dateinameWerte << "' using 1:2 title 'real' lc rgb 'black' with linespoints"
			<< ",\\\n'" << dateinameWerte << "' using 1:3 title 'imag' lc rgb 'black' dashtype '-' with linespoints"
			<< endl;
	os.close();
}

void starteGnuplot(const string& dateiname) {
	string kommando = "gnuplot " + dateiname;
	int ret = system(kommando.c_str());
	if(ret!=0) { cerr << "Fehler beim Ausführen von " << kommando;}
}

int main() {
	Signal signal;
	const string dateinameWerte = "signal.dat";
	const string dateinameGnuplot = "signal.gp";
	const string dateinamePdf = "signal.pdf";
	signal.generieren(32, 2.0);
	signalSpeichern(signal, dateinameWerte);
	schreibeGnuplotParameter(dateinameGnuplot, dateinameWerte, dateinamePdf);
	starteGnuplot(dateinameGnuplot);
	cout << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}

Komplex Komplex::mul(const Komplex& z) const {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

double Komplex::betrag() {
	if(betragGueltig==false) {
		cout << "Betrag neu berechnen";
		betragswert = sqrt(re*re+im*im);
		betragGueltig = true;
	}
	return betragswert;
}

double Komplex::betrag() const {
	return sqrt(re*re+im*im);
}

void Komplex::wert(double r,  double i) { 
	re = r;
	im = i;
	betragGueltig = false;
}

string Abtastwert::text() const {
	stringstream s;
	s << t << ": " << amp.text();
	return s.str();
}

size_t Signal::laenge() const {
	return werte.size(); 
}

Abtastwert Signal::wert(const int pos) const {
	return werte[pos];
}

void Signal::generieren(const unsigned int N, const double f) {
	werte.clear();	
	for(size_t n=0; n<N; n++) {
		Abtastwert a;
		a.t = n;
		double arg = 2*PI*f*n/N;
		a.amp.wert(cos(arg), sin(arg));
		werte.push_back(a);
	}
}
string Signal::text() const {
	stringstream s;
	for(auto a : werte) {
		s << a.text() << endl;
	}
	return s.str();
}	
