#include <iostream> 
using namespace std;

int funkWert(int i) { return i*i; }  
int funkZeiger(int* z) { return (*z)*(*z); } 
int funkReferenz(int& r) { return r*r; } 

int main() {
	int i=2;
	cout << funkWert(i) << endl;
	cout << funkZeiger(&i) << endl;
	cout << funkReferenz(i) << endl; 
}
