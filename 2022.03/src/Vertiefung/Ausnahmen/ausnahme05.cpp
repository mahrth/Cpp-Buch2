#include <iostream>
using namespace std;

void e() { throw 12; }

void f() {
	try {
		cout << "Vor dem Aufruf von e()\n";
		e();
		cout << "Nach dem Aufruf von e()\n";
	}
	catch(const char* const ausnahme) {
		cout << "Ausnahme (const char*) in main() gefangen: " << ausnahme << endl;
	}
	catch(int ausnahme) {
		cout << "Ausnahme (int) in main() gefangen: " << ausnahme << endl;
	}
	cout << "Ende von f() erreicht\n";
}

int main() {
	try {
		cout << "Vor dem Aufruf von f()\n";
		f();
		cout << "Nach dem Aufruf von f()\n";
	}
	catch(int ausnahme) {
		cout << "Ausnahme in main() gefangen: " << ausnahme << endl;
	}
	cout << "Ende von main() erreicht\n";
}
