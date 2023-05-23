#include <iostream>
using namespace std;

int main() {
	cout.width(6);
	cout.fill('.');
	cout << 12 << endl;
	cout << 34 << endl;
	cout.width(4);
	cout << 56 << endl;
	cout << 78 << endl;
}
