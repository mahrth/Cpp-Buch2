#include <iostream>
using namespace std;

struct A {
	virtual ~A() = default;
};

struct B : A {
	~B() { cout << "~B\n"; }
};

int main(){
	A* z = new B;
	delete z;
}	 

