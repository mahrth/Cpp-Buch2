#include <iostream>
using namespace std;

struct A {
	A() { cout << "A() " << this << endl; }
	A(const A&) { cout << "A(const A&)\n"; } 
};

A f() { return A(); } 

int main() { 
	A a = f(); 
	cout << &a << endl;
} 
