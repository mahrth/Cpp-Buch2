#include <iostream>
using namespace std;

struct T {
	int n;
    explicit T(int n) : n(n) {}
    T(const T& t) : n(t.n) { cout << "T(const T&)\n"; }
	T& operator=(const T& t) {
		cout << "operator=(const T&)\n";
		n = t.n;
		return *this;
	}
	static void tauschen(T&, T&);
};

void T::tauschen(T& t1, T& t2) {
	cout << "Betrete tausche(T&, T&)\n";
	T tmp(t1); 
	t1 = t2; 
	t2 = tmp; 
	cout << "Verlasse tausche(T&, T&)\n";
}

int main() {
	T a{2}, b{3}; 
	cout << "a=" << a.n << ", b=" << b.n << endl;
	T::tauschen(a,b);
	cout << "a=" << a.n << ", b=" << b.n << endl;
}
