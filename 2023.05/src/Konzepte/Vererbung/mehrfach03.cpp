#include <iostream>
using namespace std;

struct A {
	int x; 
	void f() { cout << "A::f x=" << x << "\n"; }
	void g() { cout << "A::g\n"; }
};

struct B {
	int x; 
	void f() { cout << "B::f x=" << x << "\n"; }
	void g() { cout << "B::g\n"; }
};

struct C : A, B {
	using A::x;
	using A::f;
	void g() {
		cout << "C::g\n";
		B::x = 2*x;
		B::f();
		A::g();
	}
};

int main() {
	C c;
	c.x = 3;
	c.f();
	c.g();
}

