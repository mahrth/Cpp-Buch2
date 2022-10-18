#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct A {
	int x, y, z;
	A(int w) : z{w}, y{z+1}, x{y+1} {}	
	string text() const {
		stringstream s;
		s << "x=" << x << ", y=" << y << ", z=" << z;
	return s.str();}
};

int main() {
	A a{100};
	cout << a.text() << endl;
}

