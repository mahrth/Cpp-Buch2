#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
	os << "[ ";
	for(auto e : v) { os << e << " "; }
	os << "]";
	return os;
}

int main() {
	vector<int> v0 = { 3, 8, 5, 1};
	cout << "v0 = " << v0;
	vector<int> v1 = v0;
	sort(v1.begin(), v1.end());
	cout << "\nv1 = " << v1 << endl;
}
