#include <iostream>
#include <set>
using namespace std;

void anzeigen(const set<int>& s) {
	cout << "s = { ";
	for(int e : s) { cout << e << " "; }
	cout << "}" << endl;
}

int main () {
	set<int> s{30,20};
	s.insert(10);
	anzeigen(s);
	s.insert(10);
	anzeigen(s);
	s.erase(20);
	anzeigen(s);
}
