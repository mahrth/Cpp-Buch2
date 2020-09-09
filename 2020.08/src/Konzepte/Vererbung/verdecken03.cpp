#include <iostream>
#include <string>
using namespace std;

struct A {
	string f(int i) const { return "A::f " + to_string(i); }
	string f(int i, int j) const { return "A::f " + to_string(i) + " " + to_string(j); }
};

struct B : A {
	string f(double d) const { 
		return "B::f " + to_string(d);
	}
};

struct C : A {
	using A::f;
	string f(double d) const { 
		return "C::f " + to_string(d);
	}
};

int main() {
	A a;
	B b;
	C c;
	cout << "1: " << a.f(1)
		<< "\n2: " << a.f(4,5)
		<< "\n3: " << b.f(2.0)
		<< "\n4: " << b.f(3) 
		//<< "\n5: " << b.f(6,7)
		<< "\n6: " << c.f(8,9)
		<< "\n7: " << c.f(10)
		<< endl;
}

