#include <iostream>
using namespace std;

#define COUT(x) (cout << #x " = " << (x) << '\n')

struct A {
	int k;
	A() : k(0) {}
	void f() {}  	
	virtual void g() {}  	
	virtual void h() {}  	
};

struct B : A {
	int l;
	B() : A(), l(0) {}
	virtual void g() {}  	
};

int main(){
	A a;
	B b;
	COUT(sizeof(int)); 
	COUT(sizeof(A));	
	COUT(&a); 
	COUT(&a.k); 
	COUT(&b); 
	COUT(&b.k); 
	COUT(&b.l); 
}	 

