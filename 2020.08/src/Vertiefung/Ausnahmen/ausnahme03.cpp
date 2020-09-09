#include <iostream>
using namespace std;

void e() { throw "Fehler"; }

void f() {
	cout << "Vor dem Aufruf von e()\n";
	e();
	cout << "Nach dem Aufruf von e()\n";
}

int main() {
	cout << "Vor dem Aufruf von f()\n";
	f();
	cout << "Nach dem Aufruf von f()\n";	
}
