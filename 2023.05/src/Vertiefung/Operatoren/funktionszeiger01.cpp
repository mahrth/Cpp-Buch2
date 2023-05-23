#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

double summe(const vector<double>& v, double (*f)(double)) {
	double summe=0;
	for(double x : v) { summe += f(x); }
	return summe;
}

double quadrat(double x) { return x*x; }
double wurzel(double x) { return sqrt(x); }

int main() {
	vector<double> v{4.0,9.0};
	cout << summe(v,quadrat) << endl;
	cout << summe(v,wurzel) << endl;
}
