#include <iostream>
using namespace std;

struct A {
	void g(); 
	void f();	
};

struct B : A { 
	void g();
};

void A::g() { cout << "A::g()\n"; } 

void A::f() {	
	cout << "A::f()\n";
	g();
}	

void B::g() { cout << "B::g()\n"; }

int main() {
	B b;
	b.f();
}
