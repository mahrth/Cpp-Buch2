#include <iostream>
using namespace std;
 
constexpr int f1(int n) {
	return n <= 1 ? 1 : (n * f1(n - 1));
}

constexpr int f2(int n) {
	int m = 1;
	for(int i=1; i<=n; i++) { m *= i; }
	return m;
}

int main() {
	const int n1 = 4;
	const int m1 = f1(n1);
	cout << n1 << "! = " << m1 << endl;
	const int n2 = 5;
	const int m2 = f2(n2);
	cout << n2 << "! = " << m2 << endl;
}
