#include "Komplex.h"
#include <iostream>
using namespace std;

int main() {
	struct L {
		int operator()(int i) const { return i*i; }
		double operator()(double d) const { return d*d;	}
		Komplex operator()(const Komplex& k) const { return k*k; }
	};
	L quadrat;
	cout << quadrat(2) << endl;
	cout << quadrat(2.5) << endl;
	cout << quadrat(Komplex{1,2}) << endl;
}
