#include <iostream>
using namespace std;

struct A {
	bool b;
	explicit A(bool b) : b(b) {}
	A operator!() const { return A{!b}; }
};

int main() {
	A a1{false};
	const A a2{false};
	cout << "1: a1.b=" << a1.b << ", a2.b=" << a2.b;
	a1 = !a2;
	cout << "\n2: a1.b=" << a1.b << ", a2.b=" << a2.b << endl;
}
