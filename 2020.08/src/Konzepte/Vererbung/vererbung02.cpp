#include <iostream>
using namespace std;

struct A {
	A() { cout << "A()\n"; }
	~A() { cout << "~A()\n"; }
};

struct B : A {
	B() { cout << "B()\n"; }
	~B() { cout << "~B()\n"; }
};

int main() {
	B b;
	cout << "Ende\n";
}

