#include <iostream>
using namespace std;

struct S {
	int e1, e2;
};

void f(const S& s) {
	cout << s.e1 << " " << s.e2 << " ";
}

int main() {
	S s = {1,2};
	f(s);
	S* z = &s;
	z->e1 = 3;
	(*z).e2 = 4;
	f(s);
	cout << endl;
}
