#include <iostream>
#include <stdexcept>
using namespace std;

void e(bool basisWerfen) {
	if(basisWerfen) { throw exception(); }
	else { throw invalid_argument(""); }
}

void f(bool basisWerfen) {
	try { e(basisWerfen); }
	catch(const invalid_argument& a) {
		cout << "Ausnahme (invalid_argument) gefangen\n";
	}
	catch(const exception& a) {
		cout << "Ausnahme (exception) gefangen\n";
	}
}

int main() {
	f(true);
	f(false);
}
