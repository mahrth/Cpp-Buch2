#include <iostream>
using namespace std;

struct A {
	A(){ cout << "Konstruktor\n"; }  
	~A() { cout << "Destruktor\n"; }
};

int main() {
	A* z = new A[3];
	delete[] z;
}
