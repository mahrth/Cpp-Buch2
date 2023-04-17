#include <iostream>
using namespace std;

struct A {
	void f() {
		cout << "A::f()\n";
	}
};

class B : A {
public:
	void g() {
		cout << "B:g()\n";
		f();
	}	
};

int main() {
	B b;
	//b.f();
	b.g();
}

