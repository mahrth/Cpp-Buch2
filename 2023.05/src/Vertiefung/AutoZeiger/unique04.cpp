#include <iostream>
#include <memory>
#include <stdexcept>
using namespace std;

struct A {
	A(int n) { cout << "A(" << n << ")\n"; }  
	~A() { cout << "~A()\n"; }
	void f() { cout << "f()\n"; }
};

void e() { throw std::exception(); }

void f() {
	unique_ptr<A> z(new A(0));
	e();
	cout << "Ende f()\n";
}

int main() {
	try { f(); }
	catch(const exception& e) {
		cout << "Ausnahme in main() gefangen\n";
	}
}
