#include <iostream>
using namespace std;

struct A {
	int k, m;
	A(int k) : k{k}, m{k} {	cout << "A(int)\n";	}
	A(int k, int m) : k{k}, m{m} { 
		cout << "A(int,int)\n"; 
	}
	void log() const { 
		cout << "k=" << k << ", m=" << m << endl; 
	}
};

struct B {
	A a1,a2;
	A* a3;
	B(int i) : a1{2*i}, a2{3*i,-i} {
		a3 = new A{-i,i};
	}
	~B() { delete a3; }
};

int main() {
	B b{3};
	b.a1.log(); b.a2.log();	b.a3->log();
}

