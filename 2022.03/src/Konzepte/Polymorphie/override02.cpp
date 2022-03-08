#include <iostream>
using namespace std;

struct A {
	virtual void f1() {}
	void g() {}
};

struct B : A {
	//void f2() override {}
	//void g() override {}
};

int main() {
	B b;
	A* z = &b;
	z->f1();
	z->g();
}
