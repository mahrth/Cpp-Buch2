#include <iostream>
using namespace std;

struct A {
	void f(const A& a) {
		cout << "Meine Adresse ist: " << this 
		<< "\nDie Adresse des übergebenen Objekts ist: " << &a 
		<< "\nWir sind ";
		if(this==&a) { cout << "identische"; }
		else { cout << "unterschiedliche"; }
		cout << " Objekte" << endl;
	}
};

int main() {
	A a1, a2;
	cout << "a1.f(a2) liefert:\n"; 
	a1.f(a2);
	cout << "a1.f(a1) liefert:\n"; 
	a1.f(a1);
}
