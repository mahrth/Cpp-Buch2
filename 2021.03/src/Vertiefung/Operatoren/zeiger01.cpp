#include <iostream>
using namespace std;

struct A {
	int n;
	explicit A(int n) : n(n) {}
};

int main() {
	int A::*zn = &A::n;
	A a(1);
	cout << "a.n: " << a.n;
	cout << "\na.*zn: " << a.*zn;
	A* za = &a;
	cout << "\nza->*zn: " << za->*zn << endl;
}
