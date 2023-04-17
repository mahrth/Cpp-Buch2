struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	Komplex operator*(const Komplex& k) const {
		return Komplex{re*k.re - im*k.im, re*k.im + im*k.re};
	}
	Komplex operator*(double d) {
		return Komplex{re*d, im*d};
	}
};

int main() {
	Komplex a1{2,3}, a2{4,5}, a3;
	a3 = a1 * a2;
	a3 = a1 * 2.0;
	//a3 = 3.0 * a2;
}


