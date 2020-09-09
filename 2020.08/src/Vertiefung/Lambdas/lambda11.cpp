#include <functional>
#include <iostream>
using namespace std;

struct  A {
	int i;
	function<void(void)> f = [this] () { ++i; };
	A(int i) : i(i) {}
};

int main() {
	A a{0};
	a.f();
	cout << a.i << endl;
	a.f();
	cout << a.i << endl;
}
