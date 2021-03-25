#include <iostream>
using namespace std;

void e() { throw "Fehler"; }

void f() {
	try {
		cout << "Vor dem Aufruf von e()\n";
		e();
		cout << "Nach dem Aufruf von e()\n";
	}
	catch(const char* const ausnahme) {
		cout << "Ausnahme in f() gefangen: " << ausnahme << endl;
	}
	cout << "Ende von f() erreicht\n";
}

int main() {
	f();
}
