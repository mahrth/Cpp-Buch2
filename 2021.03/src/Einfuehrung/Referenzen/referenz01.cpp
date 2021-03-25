#include <iostream>
using namespace std;

int main() {
	int i = 1; 
	cout << "i = " << i << endl;
	i += 2; 
	cout << "i = " << i << endl;
	int* z = &i; 
	*z += 2; 
	cout << "i = " << i << endl;
	int& r = i;
	r += 2; 
	cout << "i = " << i << endl;
}


