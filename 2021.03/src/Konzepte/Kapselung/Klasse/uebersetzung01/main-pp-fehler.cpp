struct A {
	void f();
};
struct A {
	void f();
};
struct B {
	A a;
	void g() { a.f(); }
};
int main() {
	A a;
	B b;
	a.f();
	b.g();
}

