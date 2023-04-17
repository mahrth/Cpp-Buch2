#include <iostream>
using namespace std;

int main() {
	int i = 1, j = 100;
	int& r = i;
	r += 2; 
	cout << "i = " << i << endl;
	r = j; 
	r += 2; 
	cout << "i = " << i << endl;	
	cout << "j = " << j << endl;	
}


