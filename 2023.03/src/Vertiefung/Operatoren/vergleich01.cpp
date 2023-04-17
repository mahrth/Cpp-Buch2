#include <compare>
#include <iostream>
using namespace std;

struct A {
	int n,m;
	constexpr explicit A(int n, int m) : n{n}, m{m} {}
	auto operator<=>(const A& a) const = default;
	friend ostream& operator<<(ostream& os, const A& a) {
		os << "[" << a.n << "," << a.m << "]";
		return os;
	}
};

void vergleichen(const A& a1, const A& a2) {
	if(a1==a2) { cout << a1 << "==" << a2 << endl; }
	if(a1!=a2) { cout << a1 << "!=" << a2 << endl; }
	if(a1<a2) { cout << a1 << "<" << a2 << endl; }
	if(a1>a2) { cout << a1 << ">" << a2 << endl; }
	if(a1<=a2) { cout << a1 << "<=" << a2 << endl; }
	if(a1>=a2) { cout << a1 << ">=" << a2 << endl; }
}

int main() {
	A a1{1,4}, a2{2,3};
	vergleichen(a1,a2);
}
