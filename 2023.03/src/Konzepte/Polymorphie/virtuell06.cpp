#include <iostream>
using namespace std;

class A {
public:
	virtual void g() { 
		f();
	}
private:
	virtual void f() {	
		cout << "A::f\n";
	}
};

class B : public A { 
private:
	virtual void f() {	
		cout << "B::f\n";
	}
};

int main() {
	B b;
	b.g();
}
