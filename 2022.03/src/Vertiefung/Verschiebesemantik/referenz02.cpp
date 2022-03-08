#include <iostream>
using namespace std;

struct A {};
string f(A& r) { return "L-Wert-Referenz"; }
string f(A&& r) {	return "R-Wert-Referenz"; }

int main() {
	A a;
	cout << "f(a)       -> " << f(a);
	cout << "\nf(A())     -> " << f(A());
	cout << "\nf(move(a)) -> " << f(move(a));
}


 
