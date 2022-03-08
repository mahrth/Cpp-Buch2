#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) {}
};

struct B : A {
	int m;
	B(int k, int m) : A(k), m(m) {}
};

int main() {
	A a(1);
	B b(2,3);
	cout << "a.k=" << a.k << " b.k=" << b.k << " b.m=" << b.m
		<< "\nsizeof(int): " << sizeof(int)
		<< "\nsizeof(a): " << sizeof(a) 
		<< "\nsizeof(b): " << sizeof(b)
		<< "\n&b: " << &b
		<< "\n&b.k: " << &b.k
		<< "\n&b.m: " << &b.m
		<< endl;
}

