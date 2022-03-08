#include "Komplex.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

ostream& operator<<(ostream& os, const vector<Komplex>& v) {
	os << "[ ";
	for(auto e : v) { os << e << " "; }
	os << "]";
	return os;
}

int main() {
	vector<Komplex> v0 = { Komplex{3.0,-4.0}, Komplex{1.0,2.0}, Komplex{-5.0,-6.0} };
	cout << "v0 = " << v0;
	vector<Komplex> v1 = v0;
	sort(v1.begin(), v1.end());
	cout << "\nv1 = " << v1 << endl;
}
