#include <iostream>
using namespace std;

struct A {
	const char* f() { return "A::f()"; }
	const char* f(int arg) { return "A::f(int)"; }
};
const char* f() { return "f()"; }
const char* f(int arg) { return "f(int)"; }

int main() {
	int i=0;
	cout << "f()    -> " << f() << endl;
	cout << "f(i)   -> " << f(i) << endl;
	A a;
	cout << "a.f()  -> " << a.f() << endl;
	cout << "a.f(i) -> " << a.f(i) << endl;
}


