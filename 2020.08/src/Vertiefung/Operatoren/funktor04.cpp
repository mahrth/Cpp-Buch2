#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Potenz {
private:
	const double exponent;
	int zaehler=0;
public:
	Potenz(double exponent) : exponent(exponent) {}
	int operator()(double basis) {
		++zaehler;
		return pow(basis, exponent);
	}
	string info() const {
		stringstream s;
		s << "Potenz x^" << exponent << " wurde " << zaehler << " mal berechnet.";
		return s.str();
	}
};

int main() {
	Potenz quadrat{2};
	Potenz wurzel{0.5};
	vector<double> v{4.0,9.0};
	for(double d: v) { cout << quadrat(d) << endl; }
	v.push_back(16.0);
	for(double d: v) { cout << wurzel(d) << endl; }
	cout << quadrat.info() << endl;
	cout << wurzel.info() << endl;
}
