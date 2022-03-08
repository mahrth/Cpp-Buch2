#include <iostream>
using namespace std;

struct A {
	void operator!() {} 
	void operator++() {} 
};

int main() {
	A a;
	!a;
	//a!; 
	++a;
	//a++; 
}
