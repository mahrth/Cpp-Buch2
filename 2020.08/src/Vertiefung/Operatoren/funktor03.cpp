#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Berechnung {
	virtual ~Berechnung() {}
	virtual int operator()(int i) const = 0;
};

int summe(const vector<int>& v, const Berechnung& f) {
	int summe=0;
	for(int i : v) { summe += f(i); }
	return summe;	
}

struct Quadrat : Berechnung {
	int operator()(int i) const { return i*i; }
};

struct Wurzel : Berechnung {
	int operator()(int i) const { return sqrt(i); }
};

int main() {
	const Quadrat quadrat;
	const Wurzel wurzel;
	vector<int> v{4,9};
	cout << summe(v,quadrat) << endl;
	cout << summe(v,wurzel) << endl;
}
