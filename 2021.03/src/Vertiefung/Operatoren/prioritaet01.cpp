#include <iostream>
using namespace std;

struct A {
	A& operator++() { 
		cout << "Geringere Priorität: Prefix ++\n"; 
		return *this;
	}
	A& operator++(int) { 
		cout << "Höhere Priorität: Postfix ++\n"; 
		return *this;
	}
	A& operator--() { 
		cout << "Geringere Priorität: Prefix --\n"; 
		return *this;
	}
	A& operator--(int) { 
		cout << "Höhere Priorität: Postfix --\n"; 
		return *this;
	}
};

int main() {
	A a;
	--++a++--; 
}
