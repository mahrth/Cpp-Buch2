#include <iostream>
using namespace std;

struct A {
	void g() {
		cout << "A::g\n";
	}
};

struct B : A {
	void g() {
		cout << "B::g\n";
	}
};

void f(A a) {
	a.g();
}

int main() {
	B b;
	f(b);
}

