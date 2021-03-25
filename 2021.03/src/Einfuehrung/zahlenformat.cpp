#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double d1 = 123.0, d2 = 4.56;
	cout << d1 << " " << d2
		<< "\nshowpoint: " << showpoint 
		<< d1 << " " << d2
		<< "\nscientific: " << scientific 
		<< d1 << " " << d2
		<< "\nfixed: " << fixed << d1 << " " << d2
		<< "\nsetprecision(1): " 
		<< setprecision(1) << d1 << " " << d2
		<< "\nscientific: " << scientific 
		<< d1 << " " << d2 << endl;
}
