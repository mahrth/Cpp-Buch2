#include <iostream>
using namespace std;

struct A {
	bool b;
	explicit A(bool b) : b(b) {}
};

void neg(A& a) { a.b = !a.b; }
void operator!(A& a) { a.b = !a.b; }

int main() {
	A a{true};
	cout << "1: a.b=" << a.b;
	neg(a);
	cout << "\n2: a.b=" << a.b;
	operator!(a);
	cout << "\n3: a.b=" << a.b;
	!a;
	cout << "\n4: a.b=" << a.b << endl;
}
