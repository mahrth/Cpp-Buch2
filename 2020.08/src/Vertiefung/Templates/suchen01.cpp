#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

ostream& operator<<(ostream& os, const list<int>& l) {
	os << "[ ";
	for(auto e : l) { os << e << " "; }
	os << "]";
	return os;
}

bool istEnthalten(list<int>& l, int x) {
	list<int>::iterator it = find(l.begin(), l.end(), x);
	return it!=l.end();
}

int main() {
	list<int> l = { 3, 8, 5, 1};
	int k[] = {8,9};
	for(auto i : k) {
		cout << i << " ist " << (istEnthalten(l,i) ? "" : "nicht ") << "in " << l << " enthalten.\n";
	}
}
