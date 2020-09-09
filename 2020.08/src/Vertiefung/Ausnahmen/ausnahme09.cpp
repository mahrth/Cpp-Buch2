#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

struct A {
	const string name;
	explicit A(const string& name) : name(name) {
		cout << "Konstruktor: " << name << endl;
	}
	virtual ~A() {
		cout << "Destruktor: " << name << endl;
	}
};

void e1() {
	A a{"Stapelspeicher e1"};
	throw invalid_argument("");
}

void e2() {
	A* a = new A{"Freispeicher e2"};
	throw invalid_argument("");
	delete a;
}

void f1() {
	A a{"Stapelspeicher f1"};
	e1();
}

void f2() {
	A* a = new A{"Freispeicher f2"};
	e2();
	delete a;
}

int main() {
	try { f1(); }
	catch(const exception& e) {}
	try { f2(); }
	catch(const exception& e) {}
}
