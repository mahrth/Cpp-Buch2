#include <iostream>
using namespace std;

void e() { throw "Fehler"; }

void f() {
	cout << "Vor dem Aufruf von e()\n";
	e();
	cout << "Nach dem Aufruf von e()\n";
}

int main() {
	try {
		cout << "Vor dem Aufruf von f()\n";
		f();
		cout << "Nach dem Aufruf von f()\n";
	}
	catch(const char* const ausnahme) {
		cout << "Ausnahme in main() gefangen: " << ausnahme << endl;
	}
	cout << "Ende von main() erreicht\n";
}
