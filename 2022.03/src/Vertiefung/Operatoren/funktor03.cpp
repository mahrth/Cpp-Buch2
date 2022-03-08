#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Berechnung {
	virtual ~Berechnung() {}
	virtual double operator()(double) const = 0;
};

double summe(const vector<double>& v, const Berechnung& f) {
	double summe=0;
	for(double x : v) { summe += f(x); }
	return summe;	
}

struct Quadrat : Berechnung {
	double operator()(double x) const { return x*x; }
};

struct Wurzel : Berechnung {
	double operator()(double x) const { return sqrt(x); }
};

int main() {
	const Quadrat quadrat;
	const Wurzel wurzel;
	vector<double> v{4.0,9.0};
	cout << summe(v,quadrat) << endl;
	cout << summe(v,wurzel) << endl;
}
