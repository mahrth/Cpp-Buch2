#include <iostream>
using namespace std;

struct A {
	A() { cout << "A() " << this << endl; }
	A(const A&) { cout << "A(const A&)\n"; }
	A& operator=(const A& a) { 
		cout << "operator=(const A&) " << &a << " -> " << this << endl; 
		return *this;
	}
};

struct B {
	explicit operator A() const {
		A a;
		cout << "operator A() " << &a << endl;
		return a;
	}
};

int main() {
	B b;
	A a1;
	cout << "1:\n";
	a1 = A(b);
	cout << &a1 << endl;
	cout << "2:\n";
	A a2 = A(b);
	cout << &a2 << endl;
}
