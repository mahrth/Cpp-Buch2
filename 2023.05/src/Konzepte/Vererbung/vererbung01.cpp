#include <iostream>
using namespace std;

struct A {
	int k;
	int f() { return k; }
};

struct B : A {};

int main() {
	B b;
	b.k = 123;
	cout << b.f();
}

