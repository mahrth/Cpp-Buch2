#include <iostream>
using namespace std;

struct A {
	int i, j;
	A(int i, int j) : i(i), j(j) {}
};

struct B : A {
	double j;
	B(int i, int j) : A(i,j) {
		this->j = (i+j)/2.0;
	}
};

int main() {
	B b(1,2);
	cout << "b.i=" << b.i << " b.j=" << b.j << " b.A::j=" << b.A::j	<< endl;
}

