#include <iostream> 
using namespace std;

int f1(int i) { return i*i; }  
int f2(int* z) { return (*z)*(*z); } 
int f3(int& r) { return r*r; } 

int main() {
	int i=2;
	cout << f1(i) << endl;
	cout << f2(&i) << endl;
	cout << f3(i) << endl; 
}
