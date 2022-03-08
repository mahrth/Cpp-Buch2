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

bool vergleich(int i,int j) { 
	return (i<j); 
}

struct Vergleicher {
	  bool operator()(int i,int j) { return (i<j); }
};

int main() {
	vector<int> v0 = { 3, 8, 5, 1};
	cout << "v0 = " << v0;
	vector<int> v1 = v0;
	sort(v1.begin(), v1.end(), vergleich);
	cout << "\nv1 = " << v1;
	Vergleicher vergleicher;
	vector<int> v2 = v0;
	sort(v2.begin(), v2.end(), vergleicher);
	cout << "\nv2 = " << v2 << endl;
}
