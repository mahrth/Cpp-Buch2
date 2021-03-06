#include <iostream>
using namespace std;

template<typename T> 
struct A {
	T x;
	A(const T& x) : x(x) {}
	A(const A& a) : x(a.x) {
		cout << "A(const A&)";
	}
	template<typename S> A(const A<S>& a) : x(a.x) {
		cout << "A<S>(const A&)";
	}
};

template<typename T>
ostream& operator<<(ostream& s, const A<T>& a) {
	s << a.x;
	return s;
}

int main() {
	A<double> a1{1.1};
	cout << "a1 = " << a1 << endl;
	A<double> a2{a1};
	cout << "\na2 = " << a2 << endl;
	A<int> a3{a1};
	cout << "\na3 = " << a3 << endl;
}
