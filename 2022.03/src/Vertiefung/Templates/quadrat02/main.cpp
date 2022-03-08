#include "Komplex.h"
#include <iostream>
using namespace std;

template <typename T> 
T quadrat(const T& x) { return x*x; }

int main() {
	int i = 2;
	double d = 1.5;
	Komplex k{4.0,5.0};
	string s = "";
	cout << "quadrat(i): " << quadrat(i);
	cout << "\nquadrat(d): " << quadrat(d);
	cout << "\nquadrat(k): " << quadrat(k);
	cout << "\nquadrat<int>(d): " << quadrat<int>(d);
	//cout << "\nquadrat(s): " << quadrat(s);
	cout << endl;
}
