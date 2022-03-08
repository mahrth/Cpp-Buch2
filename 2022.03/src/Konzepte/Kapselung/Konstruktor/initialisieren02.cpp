#include <iostream>
#include <string>
using namespace std;

struct A {
	int x, y, z;
	A(const int x, const int y) {
		cout << "A::A(int,int)\n";
		this->x = x;
		this->y = y;
		z = x+y;
	}
};

struct B {
	int i = 0;	
	double d = 0;
	bool b = false;
	A a1 = {1, 2};
	A a2{1, 2};
	//A a3(1,2);
	string s1;
	string s2 = {"Hallo"};
	string s3{"Hallo"};
	//string s4("Hallo");	
	B();
};

B::B() {
	cout << "B::B()" << "\ni=" << i << " d=" << d << " b=" << b << "\na1.x=" << a1.x << " a1.y=" << a1.y << " a1.z=" << a1.z << "\ns1=" << s1 << " s2=" << s2 << endl;
}

int main() { B b; }

