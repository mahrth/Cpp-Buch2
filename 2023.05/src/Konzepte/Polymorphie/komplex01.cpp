#include <iostream>
#include <type_traits>
using namespace std;

class Komplex {
private:
	double re, im;
public:
	constexpr Komplex(double re, double im) : 
		re{re}, im{im} {}
	constexpr double real() const { return re; }
	constexpr double imag() const { return im; }
	constexpr Komplex mul(const Komplex& z) const {
		return Komplex{re*z.re-im*z.im, re*z.im+im*z.re};
	}		
};

int main() {
	cout << boolalpha 
		<< "is_literal_type<Komplex>: " 
		<< is_literal_type<Komplex>();
	constexpr Komplex k1{1,2}, k2{-3,4};
	constexpr Komplex k[] = {k1, k2};
	constexpr Komplex k3 = k1.mul(k2);
	constexpr Komplex k4 = k[0].mul(k[1]);
	static_assert(k3.real()==k4.real(), "Fehler");
	static_assert(k3.imag()==k4.imag(), "Fehler");
}
