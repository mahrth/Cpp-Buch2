#include <iostream>
using namespace std;

struct  A {
	int i;
	A(int i) : i(i) {}
	auto erzeugen() {
		return [this] () { ++i; };
	}
};

int main() {
	A a{0};
	auto f = a.erzeugen();
	f();
	cout << a.i << endl;
	f();
	cout << a.i << endl;
}
