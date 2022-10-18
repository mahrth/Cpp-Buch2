#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) {}
	A(const A& a) : k(a.k) { 
		cout << "Kopierkonstruktor A";
	}
};

struct B : A {
	int l;
	B(int k, int l) : A(k), l(l) {}
};

int main() {
	A a(1);
	B b(2,3);
	cout << "b.k=" << b.k << " b.l=" << b.l; 
	A& r = b; 
	int* z = &r.k; 
	cout << "\n" << *z; 
	cout << " " << *(++z) << "\n"; 
	A a2(b); 
	cout << "\nsizeof(int): " << sizeof(int) 
		<< "\nsizeof(a): " << sizeof(a) 
		<< "\nsizeof(b): " << sizeof(b)
		<< "\nsizeof(r): " << sizeof(r)
		<< "\nsizeof(a2): " << sizeof(a2)
		<< endl;
}

