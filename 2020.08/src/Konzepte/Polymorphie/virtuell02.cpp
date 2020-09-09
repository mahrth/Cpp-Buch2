#include <iostream>
using namespace std;

struct A1 {
	int k;
	A1() : k(0) {}
	void f() {}  	
};

struct A2 {
	int k;
	A2() : k(0) {}
	virtual void f() {}  	
};

int main(){
	A1 a1;
	A2 a2;
	cout << "Größe eines Zeigers: " << sizeof(void*) << " Bytes\n";
	cout << "Speicherversatz a1.k: " << ((size_t)&a1.k-(size_t)&a1) << " Bytes\n";
	cout << "Speicherversatz a2.k: " << ((size_t)&a2.k-(size_t)&a2) << " Bytes\n";
}	 

