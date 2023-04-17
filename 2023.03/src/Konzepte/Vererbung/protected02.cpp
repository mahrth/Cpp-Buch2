struct A {
	protected: void f() {}
};
struct B : A { void h(); };
struct C : B {};
struct D : A {};
void B::h() {
	f();
	A a;
	//a.f();	
	B b;
	b.f();
	C c;
	c.f();
	D d;
	//d.f();
	A* z = &b;
	//z->f();	
}

int main() {
	B b2;
	b2.h();
}
