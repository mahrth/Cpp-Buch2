struct A {
	int m,n;
	void f() const {}
};

int main() {
	const A a1 = {1,2};
	A a2 = {5,6};
	a1.f();
	a2.f();
}
