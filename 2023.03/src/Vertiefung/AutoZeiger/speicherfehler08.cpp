#include <iostream>
using namespace std;

struct A {
	~A() { cout << "Destruktor\n"; }
};

int main() {
	A* z = new A;
	delete[] z;
}
