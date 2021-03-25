struct A { void f() {} };
struct B : A { void g() {} };
class C : public A {
	public: void g() {}
};
class D : A {
	public:	void g() { f(); }
};
struct E : private A {
	void g() { f(); }
};
int main() {
	B b; C c; D d; E e;
	b.f();
	c.f();
	//d.f();
	//e.f();
	d.g();
	e.g();
}

