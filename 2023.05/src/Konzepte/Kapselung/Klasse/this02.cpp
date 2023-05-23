#include <iostream>
using namespace std;

struct A {
	int w;
	void f(int w) {
		cout << "Wert des Datenelements w: " << this->w
		<< "\nWert des Funktionsarguments w: " << w
		<< "\nAdresse des Datenelements w: " << &(this->w)
		<< "\nAdresse des Funktionsarguments w: " << &w;
		this->w = w;
		cout << "\nNeuer Wert des Datenelements w: " << this->w << endl;
	}
};

int main() {
	A a;
	int k = 7;
	a.f(k); 
}
