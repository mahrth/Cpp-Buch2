#include <iostream>
using namespace std;

struct A {
	void operator++() { cout << "Prefix Inkrement\n"; }
	void operator++(int) { cout << "Postfix Inkrement\n"; }
};
void operator--(A&) { cout << "Prefix Dekrement\n"; }
void operator--(A&, int) { cout << "Postfix Dekrement\n"; }

int main() {
	A a;
	++a;
	a++;
	--a;
	a--;
}
