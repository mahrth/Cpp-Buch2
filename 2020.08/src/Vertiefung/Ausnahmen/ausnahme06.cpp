#include <iostream>
#include <stdexcept>
using namespace std;

void e() { throw invalid_argument("Fehler"); }

int main() {
	try { e(); }
	catch(const invalid_argument& a) {
		cout << "Ausnahme gefangen: " << a.what() << endl;
	}
}
