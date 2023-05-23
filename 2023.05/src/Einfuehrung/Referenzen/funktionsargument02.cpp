#include <iostream> 
using namespace std;

void f1(int i) {  
	cout << "f1(int)";
	i++;  
}

void f2(int* z) { 
	cout << "f2(int*)";
	(*z)++; 
}

void f3(int& r) { 
	cout << "f3(int&)";
	r++;
}

int main() {
	int i = 0;
	cout << "i: " << i << endl;
	f1(i); 
	cout << " -> i: " << i << endl;
	f2(&i); 
	cout << " -> i: " << i << endl;
	f3(i); 
	cout << " -> i: " << i << endl;
}
