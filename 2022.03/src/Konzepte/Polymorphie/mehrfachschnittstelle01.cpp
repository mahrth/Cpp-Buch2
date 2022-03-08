#include <iostream>
using namespace std;

struct A {
	virtual ~A() = default; 
	virtual void f() = 0;
};

struct B : A {
	virtual void g() = 0;
};

struct C : A {
	virtual void h() = 0;
};

struct D : B, C {
	void f() override { cout << "D::f()\n"; }
	void g() override { cout << "D::g()\n"; }
	void h() override { cout << "D::h()\n"; }
};

int main() {
	D d;
	B* b = &d;
	C* c = &d;
	b->f();
	b->g();
	//b->h();
	c->f();
	c->h();
	//c->g();
}

