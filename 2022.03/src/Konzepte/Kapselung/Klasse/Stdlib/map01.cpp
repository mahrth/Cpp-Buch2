#include <iostream>
#include <map>
#include <string>
using namespace std;

void anzeigen(const map<string,int>& m) {
	cout << "m = { ";
	for(auto& e : m) {
		cout  << e.first 
		<< ":" << e.second 
		<< " "; 
	}
	cout << "}" << endl;
}

int main () {
	map<string,int> m;
	m["A"] = 10;
	m["B"] = 20;
	anzeigen(m);
	m["A"] = 30;
	anzeigen(m);
	cout << "m[\"A\"]: " << m["A"] << endl;
	cout << "m[\"C\"]: " << m["C"] << endl;
}
