struct A {
	int k;
	int f() const { return k; }
	[[nodiscard]] int g() const { return k; }
};

int main() {
	A a = {0};
	a.f();
	a.g();
	int n = a.g();
	return n;
}
