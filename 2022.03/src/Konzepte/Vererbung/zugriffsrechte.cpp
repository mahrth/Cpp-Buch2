struct A { public: void f(){} protected: void g(){} private: void h(){} };
struct D : A {};
struct B1 : public A { void k(); };
struct C1 : B1 {};
struct B2 : protected A { void k(); };
struct C2 : B2 {};
struct B3 : private A { void k(); };
struct C3 : B3 {};

void B1::k() {
	f(); g(); //h();
	A a; a.f(); //a.g(); //a.h();
	B1 b; b.f(); b.g(); //b.h();
	C1 c; c.f(); c.g(); //c.h();
	D d; d.f(); //d.g(); //d.h();
	A* z = &b; z->f(); //z->g(); z->h(); 
}

void B2::k() {
	f(); g(); //h();
	A a; a.f(); //a.g(); // a.h();
	B1 b; b.f(); //b.g(); // b.h();
	C1 c; c.f(); //c.g(); // c.h();
	D d; d.f(); //d.g(); // d.h();
	A* z = &b; z->f(); //z->g(); // z->h();
}

void B3::k() {
	f(); g(); //h();
	A a; a.f(); //a.g(); // a.h();
	B1 b; b.f(); //b.g(); // b.h();
	C1 c; c.f(); //c.g(); // c.h();
	D d; d.f(); //d.g(); // d.h();
	A* z = &b; z->f(); //z->g(); // z->h();
}

int main() {
	B1 b1; B2 b2; B3 b3; C1 c1; C2 c2; C3 c3; 
	b1.k(); b2.k(); b3.k();
	A a; a.f(); //a.g(); //a.h();
	D d; d.f(); //d.g(); //d.h();
	b1.f(); //b1.g(); //b1.h();
	c1.f(); //c1.g(); //c1.h();
	A* z1 = &b1; z1->f(); //z1->g(); //z1->h();
	//b2.f(); //b2.g(); //b2.h();
	//c2.f(); //c2.g(); //c2.h();
	//A* z2 = &b2; //z2->f(); //z2->g(); //z2->h();
	//b3.f(); //b3.g(); //b3.h();
	//c3.f(); //c3.g(); //c3.h();
	//A* z3 = &b3; //z3->f(); //z3->g(); //z3->h();
}
