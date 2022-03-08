#include <iostream>
using namespace std;

struct A {
	static int n;
	A() { 
		n++;
		cout << "A() " << this << endl; 
	}
	A(const A&) {  
		n++;
		cout << "A(const A&)\n"; 
	}
};
int A::n=0; 

A f() { return A(); } 
A g() {	A a; return a; } 

int main() {
	A a1 = f(); 
	cout << A::n << " " << &a1 << endl; 
	A a2 = g(); 
	cout << A::n << " " << &a2 << endl; 
} 
