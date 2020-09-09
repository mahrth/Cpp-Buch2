#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct A {
	int i, j, k;
	string name;	
	A(int m, int j, const string& s) : i{m}, j{j}, name{s} {
		k = i + j;
	}		
	string text() const {
		stringstream s;
		s << name << ": i=" << i << ", j=" << j << ", k=" << k;
	return s.str();}
};

int main() {
	A a1{1,2,"a1"};
	A a2{3,4,"a2"};
	cout << a1.text() << endl;
	cout << a2.text() << endl;
}

