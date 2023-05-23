#include <iostream>
using namespace std;

struct A {
	A() { cout << "Konstruktor\n"; }
	~A() { cout << "Destruktor\n"; }
};

int main() {
	A a;
	cout << "Letzte Zeile in main()\n";
}
