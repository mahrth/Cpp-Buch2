#include <iostream>
using namespace std;

struct A {
	virtual void f1() { cout << "A\n"; }
};

struct B : A {
	void f2() { cout << "B\n"; }
};

int main() {
	B b;
	A* z = &b;
	z->f1();
}

