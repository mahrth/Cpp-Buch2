#include <iostream>
using namespace std;

struct A {
	int i;
	~A() {}
	A() : i(0) {
		cout << "A()\n"; 
	}
	A(int i) : i(i) {
		cout << "A(int)\n"; 
	}
	A(const A& a) : i(a.i) {
		cout << "A(const A&)\n"; 
	}
	A(A&& a) : i(a.i) {
		cout << "A(A&&)\n"; 
	}
	A& operator=(const A&) {
		cout << "operator=(const A&)\n"; 
		return *this; 
	}
	A& operator=(A&&) {
		cout << "operator=(A&&)\n"; 
		return *this; 
	}
};

int main(){
	A a1;
	A a2(a1);
	A a3(move(a1));
	a2 = a1;
	a3 = move(a1);
}


 
