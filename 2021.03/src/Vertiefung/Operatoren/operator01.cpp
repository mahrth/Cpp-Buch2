#include <iostream>
using namespace std;

struct A {
	bool b;
	explicit A(bool b) : b(b) {}
	void neg() { b = !b; }
	void operator!() { b = !b; }
};

int main() {
	A a{true};
	cout << "1: a.b=" << a.b;
	a.neg();
	cout << "\n2: na.b=" << a.b;
	a.operator!();
	cout << "\n3: a.b=" << a.b;
	!a;
	cout << "\n4: a.b=" << a.b << endl;
}
