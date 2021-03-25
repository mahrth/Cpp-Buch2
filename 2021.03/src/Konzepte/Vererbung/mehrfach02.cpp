#include <iostream>
using namespace std;

struct A {
	int x; 
	void f() { cout << "A::f\n"; } 
};

struct B {
	int x; 
	void f() { cout << "B::f\n"; } 
};

struct C : A, B {};

int main() {
	C c;
	//c.x = 3;
	//c.f();  
	c.B::x = 3; 
	c.A::f();
}

