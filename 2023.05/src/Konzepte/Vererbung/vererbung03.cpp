#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) { cout << "A()\n"; }
};

struct B : A {
	int m;
	B(int k, int m) : A(k), m(m) { cout << "B()\n"; }
};

int main() {
	B b(2,3);
	cout << "b.k=" << b.k << " b.m=" << b.m << endl;
}

