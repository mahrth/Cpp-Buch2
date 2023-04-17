#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {	
	string dateiname = "datei03.txt";
	
	int i1=1, i2=2;
	float f1=2.3f, f2=4.5f;
	ofstream ofs;
	ofs.open(dateiname);
	ofs << i1 << " " << i2 << endl << f1 << " " << f2;
	ofs.close();
	
	int i3, i4;
	float f3, f4;
	ifstream ifs;
	ifs.open(dateiname);
	ifs >> i3 >> i4 >> f3 >> f4;
	cout << i3 << " - " << i4 << " - " << f3 << " - " << f4 << endl;
	ifs.close();
}
