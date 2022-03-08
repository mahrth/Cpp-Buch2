struct A {
	int m,n;
	void e() { m++;	n++;}
	void f() const {
		// e();
	}
	int g() const {
		int k = m;
		k *= n;
		return k;
	}
	void h() const {
		A a2 = {5, 6};
		a2.e();
		a2.m *= a2.n;
	}
};

int main() {
	A a1 = {1, 2};
	a1.f();
	a1.g();
	a1.h();
	a1.e();
}
