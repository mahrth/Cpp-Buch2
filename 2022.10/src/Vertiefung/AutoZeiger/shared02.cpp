#include <iostream>
#include <memory>
using namespace std;

struct A{
	virtual ~A() {}
	void f1() { cout << "A::f1()\n"; }
	virtual void f2() {	cout << "A::f2()\n"; }
};

struct B : A {
	void f1() { cout << "B::f1()\n"; }
	void f2() override { cout << "B::f2()\n"; }
};

int main(){
	auto z1 = make_shared<B>();
	auto z2 = static_pointer_cast<A>(z1);
	z1->f1();
	z1->f2();
	z2->f1();
	z2->f2();
}
