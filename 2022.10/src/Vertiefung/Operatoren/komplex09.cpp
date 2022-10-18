#include <cmath>
using namespace std;

struct  Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	explicit operator double() const {
		return sqrt(re*re+im*im);
	}
};

int main() {
	Komplex k{3,4};
	double betrag = (double)k;
	betrag = double(k);
	//betrag = k;
}
