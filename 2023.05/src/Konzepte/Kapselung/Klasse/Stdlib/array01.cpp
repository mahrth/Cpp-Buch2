#include <iostream>
#include <array>
using namespace std;

int main () {
	array<int,3> a = {10,20,30};
	cout << "a = [ ";
	for(int e : a) { cout << e << " "; }
	cout << "]" << endl;
	cout << a[3] << endl;
	//cout << a.at(3) << endl;
}
