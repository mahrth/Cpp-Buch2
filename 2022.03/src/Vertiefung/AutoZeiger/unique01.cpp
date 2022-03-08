#include <iostream>
using namespace std;

struct A {
	A(int n) { cout << "A(" << n << ")\n"; }  
	~A() { cout << "~A()\n"; }
	void f() { cout << "f()\n"; }
};

int main() {
	A* z = new A(0);
	z->f();
	(*z).f();
	delete z;
}
