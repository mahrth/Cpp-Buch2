#include <iostream>
using namespace std;

struct A {
	virtual void g(); 
	void f();	
};

struct B : A { 
	void g();
};

void A::g() { cout << "A::g()\n"; } 

void A::f() {	
	cout << "A::f()\n";
	this->g();
}	

void B::g() { cout << "B::g()\n"; }

int main() {
	B b;
	b.f();
}
