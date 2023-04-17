#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setfill('.') 
		<< setw(6) << 12
		<< endl << 34
		<< endl << setw(4) << 56
		<< endl << 78 << endl;
}
