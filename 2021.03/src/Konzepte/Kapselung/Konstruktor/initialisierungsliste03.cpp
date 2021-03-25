#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct A {
	const int c;
	int& r;
	A(int c, int& r) : c{c}, r{r} {}		
	string text() const {
		stringstream s;
		s << "c=" << c << ", r=" << r;
	return s.str();}
};

int main() {
	int i=1;
	A a{2,i};
	cout << a.text() << endl;
	a.r += 10;
	cout << a.text() << ", i=" << i << endl;
}

