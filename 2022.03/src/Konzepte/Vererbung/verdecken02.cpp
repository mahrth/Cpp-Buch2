#include <iostream>
#include <string>
using namespace std;

struct A {
	string f() const { return "A::f"; }
};

struct B : A {
	string f() const { 
		return "B::f " + A::f(); 
	}
};

int main() {
	A a;
	B b;
	cout << "a.f(): " << a.f()	
		<< "\nb.f(): " << b.f() << endl;
}

