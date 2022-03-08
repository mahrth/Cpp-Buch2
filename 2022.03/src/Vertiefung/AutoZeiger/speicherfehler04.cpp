#include <iostream>
using namespace std;

int main() {
	int* i1 = new int;
	int* i2 = i1;
	cout << "Vor delete i2\n";
	delete i2;
	cout << "Vor delete i1\n";
	delete i1;
}
