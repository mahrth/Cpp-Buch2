#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = stoi("12");
	cout << i << endl;
	i = stoi("-2.7");
	cout << i << endl;
	i = stoi("34xy");
	cout << i << endl;
	//i = stoi("xy34");
	double d = stod("-2.7");
	cout << d << endl;
}
