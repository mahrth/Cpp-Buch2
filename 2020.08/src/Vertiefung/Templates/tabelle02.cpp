#include <array>
#include <cmath>
#include <iostream>
using namespace std;

class Komplex {
private:
	double re, im;
public:
	constexpr Komplex(double re=0, double im=0) : re{re}, im{im} {}
	friend ostream& operator<<(ostream& os, const Komplex& k);
};

template<size_t N>
class Tabelle {
private:
	constexpr static auto init() {
		array<Komplex,N> a;
		const double PI = 3.14159265358979323846;
		const double c = 2*PI/N;
		for(size_t n=0; n<N; n++) {
			double arg = c*n;
			a[n] = Komplex{cos(arg), sin(arg)};
		}
		return a;
	}
public:
	const array<Komplex, N> werte;
	constexpr Tabelle() : werte{init()} {}
};

int main() {
    constexpr Tabelle<4> tabelle;
    for(auto a: tabelle.werte) {
		cout << a << endl;
	}
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << ((k.im<0)?"":"+") << k.im << "i";
	return os;
}
