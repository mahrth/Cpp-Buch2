#include <iostream>
using namespace std;

struct A {
	virtual void f() { 
		cout << "A::f()\n"; 
	}
	virtual void f() const { 
		cout << "A::f() const\n"; 
	}
	void f(int) { 
		cout << "A::f(int)\n"; 
	}
};

struct B : A {
	//using A::f;
	virtual void f() { 
		cout << "B::f()\n"; 
	}
};

int main() {
	B b1;
	b1.f();
	//b1.f(0);
	const B b2;
	//b2.f();
	b2.A::f();
}
