#include <iostream>
#include <string>
using namespace std;

struct A {
	const string name;
	A(string name) : name(name) {}
	void f() const {cout << "A::f[nv] ";}
};

struct B : A {
	B(string name) : A(name) {}
	virtual void f() const {cout << "B::f[v] ";}
	virtual void g() const {cout << "B::g[v] ";}
	void h() {cout << "B::h[nv] ";}
};

struct C : B {
	C(string name) : B(name) {}
	void f() const {cout << "C::f[v] ";}
};

void testA(A& a) {
	cout << "testA " << a.name << ": ";
	a.f();
	cout << endl;
}

void testB(B& b) {
	cout << "testB " << b.name << ": ";
	b.f(); b.g(); b.h();
	cout << endl;
}

int main() {
	A a("a"); B b("b"); C c("c");
	testA(a); testA(b); testA(c);
	testB(b); testB(c);
}
