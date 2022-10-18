#include <iostream>
#include <string>
using namespace std;

struct A {
	const string name;
	A(const string& s) : name(s) {
		cout << name << ": Konstruktor\n";
	}
	~A() {
		cout << name << ": Destruktor\n";
	}
};

int main() {
	A a1{"a1"};
	A a2{"a2"};
	cout << "Letzte Zeile in main()\n";
}
