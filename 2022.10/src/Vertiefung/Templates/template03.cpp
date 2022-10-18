#include <iostream>
using namespace std;

template<typename T> 
class A {
private:
	T x;
public:
	A(const T& x) : x(x) {}
	A(const A& a) : x(a.x) {}
	template<typename S> A(const A<S>& a) : x(a.x) {}
	template<typename S> friend ostream& operator<<(ostream&, const A<S>&);
	template<typename> friend class A;
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
	cout << "a2 = " << a2 << endl;
	A<int> a3{a1};
	cout << "a3 = " << a3 << endl;
}
