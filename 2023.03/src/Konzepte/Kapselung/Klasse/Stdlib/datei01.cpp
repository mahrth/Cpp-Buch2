#include <fstream>
using namespace std;

int main() {
	int i=1;
	float f = 2.3f;
	string dateiname = "datei01.txt";
	ofstream ofs;
	ofs.open(dateiname);
	ofs << "Das ist " << dateiname << endl << "i=" << i << ", f=" << f;
	ofs.close();
}
