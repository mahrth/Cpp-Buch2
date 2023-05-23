#include <iostream>
using namespace std;

struct A {};

struct B : A {
	int* werte;
	B(int n) { werte = new int[n]; }
	~B() { delete[] werte; }
};

int main(){
	A* z = new B(3);
	delete z;
}	 

