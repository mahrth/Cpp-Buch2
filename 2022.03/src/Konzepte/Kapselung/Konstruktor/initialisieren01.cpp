#include <iostream>
using namespace std;

struct A {
	int i1;	
	double d1;
	int i2 = 2;
	double d2 = 2.2;
	int i3{3};
	double d3{3.3};
	int i4{};
	double d4{};
	const bool b = false;
	A()	{
		cout << "A::A()" 
		<< "\ni1=" << i1 << " d1=" << d1 << " i2=" << i2 << " d2=" << d2 << " i3=" << i3 << " d3=" << d3 << " i4=" << i4 << " d4=" << d4 << " b=" << b << endl;
	}
};

int main() {
	A a;
}

