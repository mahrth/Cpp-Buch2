#include "A.h"
#include <iostream>
using namespace std;

int main() {
	A a1{"a1"}, a2{"a2"}, a3{"a3"};
	cout << "Linksassoziativer Elementoperator:";
	cout << "\na1+a2+a3:                         ";
	a1 + a2 + a3;
	cout << "\n(a1.operator+(a2)).operator+(a3): ";
	(a1.operator+(a2)).operator+(a3);
	cout << "\nLinksassoziativer globaler Operator:";
	cout << "\na1-a2-a3:                         ";
	a1 - a2 - a3;
	cout << "\noperator-(operator-(a1,a2),a3):   ";
	operator-(operator-(a1,a2),a3);
	cout << "\nRechtsassoziativer Elementoperator:";
	cout << "\na1+=a2+=a3:                       ";
	a1 += a2 += a3;
	cout << "\na1.operator+=(a2.operator+=(a3)): ";
	a1.operator+=(a2.operator+=(a3));
	cout << "\nRechtsassoziativer globaler Operator:";
	cout << "\na1-=a2-=a3:                       ";
	a1 -= a2 -= a3;
	cout << "\noperator-=(a1,operator-=(a2,a3)): ";
	operator-=(a1,operator-=(a2,a3));
	cout << endl;
}
