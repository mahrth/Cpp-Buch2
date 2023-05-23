#include "A.h"
#include <iostream>
using namespace std;

int main() {
	cout << "A::n=" << A::n;
	cout << "\nA::d=" << A::d;
	cout << "\nA::f=" << A::f;
	cout << "\nA::m=" << A::m;
	A a1, a2;
	cout << "\na1.n=" << a1.n << ", a2.n=" << a2.n;
	a1.n++;	
	cout << "\na1.n=" << a1.n << ", a2.n=" << a2.n;
	a2.n++;	
	cout << "\na1.n=" << a1.n << ", a2.n=" << a2.n;
	A::n++;	
	cout << "\na1.n=" << a1.n << ", a2.n=" << a2.n;
}

