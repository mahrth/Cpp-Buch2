#include <iostream>
#include <sstream>
using namespace std;

class Vektor {
private:
	int* werte;
	size_t laenge;
	size_t schreibPosition;
public:	
	Vektor(size_t laenge) : laenge{laenge}, schreibPosition{0} { 
		cout << "Vektor()\n";
		werte = new int[laenge];
	}	
private:
	Vektor(const Vektor& v);
public:	
	~Vektor() {
		cout << "~Vektor()\n";
		delete[] werte;
	}	
	void anhaengen(int wert) { 
		if(schreibPosition<laenge) {
			werte[schreibPosition++] = wert; 
		}
	}
	string text() const {
		stringstream s;
		s << "( ";
		for(size_t i=0; i<schreibPosition; i++) 	{
			s << werte[i] << " ";
		}
		s << ")";
		return s.str();
	}
};

int main() {
	Vektor a{3};
	a.anhaengen(10);
	a.anhaengen(20);
	cout << "a = " << a.text() << endl;
} 
