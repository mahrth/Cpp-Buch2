#include <iostream>
#include <memory>
using namespace std;

struct A {
	A(int n, int m) {  
		cout << "A(" << n << "," << m << ")\n"; 
	}
	~A() { cout << "~A()\n"; }
	void f() { cout << "f()\n"; }
};

int main() {
	auto z1 = make_shared<A>(1,2);
	{
		shared_ptr<A> z2(z1);
		z2->f();
		cout << "Ende  innerer Gültigkeitsbereich\n"; 
	}
	z1->f();
	cout << "Ende main()\n"; 
}
