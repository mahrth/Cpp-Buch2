#include <iostream>
using namespace std;

struct A {	
	virtual ~A() {}
};

struct B : A {
	virtual void f() { cout << "B::f\n"; }
};

void g(A* a) {
	B* b = dynamic_cast<B*>(a);
	cout << "h: a=" << a << ", b=" << b << endl;
	if(b!=nullptr) { b->f(); }
}

int main() {
	A* a = new A;
	B* b = new B;
	cout << "a=" << a << ", b=" << b << endl;
	g(b);
	g(a);
	delete a;
	delete b;
}
