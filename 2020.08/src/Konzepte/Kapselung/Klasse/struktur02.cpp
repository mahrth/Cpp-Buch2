#include <iostream>
using namespace std;

struct S {
	int e1, e2;
	void f() {
		cout << e1 << " " << e2 << " ";
	}
};

int main() {
	S s = {1,2};
	s.f();
	S* z = &s;
	z->f();
	(*z).f();
	cout << endl;
}
