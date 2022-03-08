#include <iostream>
using namespace std;

struct A { void f() { cout << "A::f\n"; } };
struct B { void g() { cout << "B::g\n"; } };
struct C : A, B {};
int main() {
	C c;
	c.f();
	c.g();
}

