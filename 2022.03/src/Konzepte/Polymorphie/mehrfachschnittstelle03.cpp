#include <iostream>
using namespace std;

struct A {
	virtual ~A() { cout << "~A()\n"; } 
	virtual void f() = 0;
};

struct B : virtual A {
	virtual ~B() override { cout << "~B()\n"; } 
	virtual void g() = 0;
};

struct C : virtual A {
	virtual ~C() override { cout << "~C()\n"; } 
	virtual void h() = 0;
};

struct D : B, C {
	virtual ~D() override { cout << "~D()\n"; } 
	void f() override { cout << "D::f()\n"; }
	void g() override { cout << "D::g()\n"; }
	void h() override { cout << "D::h()\n"; }
};

int main() {
	D d;
	A* a = &d;	
	a->f();
}

