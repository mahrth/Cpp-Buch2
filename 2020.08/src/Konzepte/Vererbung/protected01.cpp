#include <iostream>
using namespace std;

class A {
public:
	void f() { cout << "A::f()\n"; }
protected:
	void g() { cout << "A::g()\n"; }
};

struct B : A {
	void h() {
		cout << "B:h()\n";
		g();
	}	
};

int main() {
	A a; B b;
	a.f();
	//a.g();
	//b.g();
	b.h();
}
