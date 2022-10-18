#include <iostream>
using namespace std;

struct A {
	int n;
	explicit A(int n=0) : n(n) {}
	A add(const A& a) const { 
		return A{n+a.n}; 
	}
	A operator+(const A& a) const { 
		return A{n+a.n}; 
	}
};
A sub(const A& a1, const A& a2) { 
	return A{a1.n-a2.n}; 
}
A operator-(const A& a1, const A& a2) {
	return A{a1.n-a2.n}; 
}

int main() {
	const A a1{5}, a2{3};
	A a3;
	a3 = a1.add(a2);
	cout << "1: a3.n=" << a3.n;
	a3 = sub(a1,a2);
	cout << "\n2: a3.n=" << a3.n;	
	a3 = a1.operator+(a2);
	cout << "\n3: a3.n=" << a3.n;
	a3 = operator-(a1,a2);
	cout << "\n4: a3.n=" << a3.n;
	a3 = a1 + a2;
	cout << "\n5: a3.n=" << a3.n;
	a3 = a1 - a2;
	cout << "\n6: a3.n=" << a3.n << endl;
}
