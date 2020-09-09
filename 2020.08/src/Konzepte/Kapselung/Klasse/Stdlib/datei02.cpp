#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string dateiname = "datei01.txt";
	string zeile;
	ifstream ifs;
	ifs.open(dateiname);
	if(!ifs) {	
		cerr << "Kann " << dateiname << " nicht öffnen!";
	}
	while(getline(ifs,zeile)) {
		cout << zeile << endl;
	}
	ifs.close();
}
