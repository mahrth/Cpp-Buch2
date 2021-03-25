#include <iostream>
using namespace std;

struct A {
	int i, j;
	A() { cout << "A()\n"; }
	A(const A&) { cout << "A(const A&)\n"; }
	A(int x) : i{x}, j{x} { cout << "A(int)\n"; }
	A(int x, int y) : i{x}, j{y} { cout << "A(int,int)\n"; }
};

struct B : A {
	B(int x) : A{x} { cout << "B(int)\n"; }
	B(int x, int y) : A{x,y} { cout << "B(int,int)\n"; }	
	B() { cout << "B()\n"; }
};

struct C : A {
	using A::A;	
};

int main() {
	B b1;
	B b2{1};
	B b3{2,3};
	B b4{b3};
	C c1;
	C c2{4};
	C c3{5,6};
	C c4{c3};
}

