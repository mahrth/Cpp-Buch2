#include <iostream>
#include <stdexcept>
using namespace std;

void e() { throw invalid_argument("Fehler"); }

int main() {
	try { e(); }
	catch(const exception& a) {
		cout << "Ausnahme (exception) gefangen: " << a.what() << endl;
	}
	catch(const invalid_argument& a) {
		cout << "Ausnahme (invalid_argument) gefangen: " << a.what() << endl;
	}
}
