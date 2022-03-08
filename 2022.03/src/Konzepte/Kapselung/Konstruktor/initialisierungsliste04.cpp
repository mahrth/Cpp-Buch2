#include <iostream>
using namespace std;

struct A {
	int w;
	int* z;
	int& r;
	A(int w, int* z, int& r) : w{w}, z{z}, r{r} {}
	void f() const {
		//w++;
		//z++;
		(*z)++;
		r+=5;
	}
};

int main() {
	int i=1, j=2, k=3;
	cout << i << " " << j << " " << k << endl;
	A a{i,&j,k};
	a.f();
	cout << i << " " << j << " " << k << endl;
}

