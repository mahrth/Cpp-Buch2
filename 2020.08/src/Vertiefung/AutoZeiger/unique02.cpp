#include <iostream>
#include <memory>
using namespace std;

struct A {
	A(int n) { cout << "A(" << n << ")\n"; }  
	~A() { cout << "~A()\n"; }
	void f() { cout << "f()\n"; }
};

int main() {
	unique_ptr<A> z(new A(0)); 
	z->f();
	(*z).f();
	cout << "Ende main()\n"; 
}
