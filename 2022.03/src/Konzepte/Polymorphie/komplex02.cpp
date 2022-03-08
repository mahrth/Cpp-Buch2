#include <array>
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class Komplex {
private:
	double re, im;
public:
	constexpr Komplex(double re=0, double im=0) : re{re}, im{im} {}
	constexpr double real() const { return re; }
	constexpr double imag() const { return im; }	
	string text() const;
};

using Tabelle = array<Komplex,4>;

constexpr Tabelle initialisieren() {
	Tabelle t;
	const double PI = 3.14159265358979323846;
	const double c = 2*PI/t.size();
	for (unsigned int i=0; i<t.size(); i++) {
		t[i] = Komplex{cos(c*i), sin(c*i)};
	}
	return t;
}

int main() {
	constexpr Tabelle t = initialisieren();
	for(auto k : t) { cout << k.text() << endl;	}
}

string Komplex::text() const {
	stringstream s;
	s << re << ((im<0)?"":"+") << im << "i";
	return s.str();
}
