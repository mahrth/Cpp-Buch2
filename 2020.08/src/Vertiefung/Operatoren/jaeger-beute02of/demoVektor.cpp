#include "Vektor.h"
#include <iostream>
using namespace std;

int main( ){
	Vektor v1{1.0,2.0};
	Vektor v2 = v1;
	v2 += v1;
	cout << v1 << " " << v2 << endl;
	v1 = v2;
	cout << v1 << " " << v2 << endl;
	v1 *= -3;
	cout << v1 << " " << v2 << endl;
	Vektor v3 = v1 + v2;
	cout << v1 << " " << v2 << " " << v3 << endl;
}
