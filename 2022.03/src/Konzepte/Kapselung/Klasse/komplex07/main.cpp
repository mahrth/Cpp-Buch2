#include "Komplex.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	Komplex a = {0, 0};
	bool wertAendern = true;
	for(int i=1; i<=8; i++) {
		double betrag = a.betrag();
		cout << "|a|=" << showpoint << setprecision(2) << betrag << "   ";
		wertAendern = !wertAendern;		
		if(wertAendern) {
			a.re = i;
			a.im = -i;
			cout << endl;
		}
	}
}

