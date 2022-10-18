#include <iostream>
using namespace std;

struct A {
	void g() {
		cout << "A::f\n";
	}
};

struct B : A {
	void g() {
		cout << "B::f\n";
	}
};

void f(A a) {
	a.g();
}

int main() {
	B b;
	f(b);
}

