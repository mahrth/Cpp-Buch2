#include <iostream>
using namespace std;

struct A {
	~A() { cout << "~A\n"; }
};

struct B : A {
	int* werte;
	B(int n) { werte = new int[n]; }
	~B() {
		cout << "~B\n";
		delete[] werte;
	}	
};

int main(){
	A* z = new B(3);
	delete z;
}	 

