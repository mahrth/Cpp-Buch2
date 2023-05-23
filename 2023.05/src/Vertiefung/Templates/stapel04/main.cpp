#include "Stapel.h"
#include <iostream>
using namespace std;

int main() {
	Stapel<double,3> stapel1; 
	double d = 1.1;
	while (stapel1.auflegen(d)) { d += 1.1; }
	cout << "stapel1 = " << stapel1;
	Stapel<double,3> stapel2{stapel1};
	cout << "\nstapel2 = " << stapel2;
	Stapel<int,2> stapel3{stapel1};
	cout << "\nstapel3 = " << stapel3 << endl;	
}
