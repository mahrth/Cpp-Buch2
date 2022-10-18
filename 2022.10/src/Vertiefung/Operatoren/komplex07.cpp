#include <iostream>
using namespace std;

class Komplex {
private:
	double re, im;
public:
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	double real() const { return re; }
	double imag() const { return im; }
	friend istream& operator>>(istream& is, Komplex& k) {
		is >> k.re >> k.im;
		return is;
	}
	friend ostream& operator<<(ostream& os, const Komplex& k) {
		os << k.re << " + " << k.im << "i";
		return os;
	}
};

int main() {
	Komplex k;
	cin >> k;
	cout << "k = " << k << endl; 
}


