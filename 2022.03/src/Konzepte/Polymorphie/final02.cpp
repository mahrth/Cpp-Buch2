struct A{
	virtual void f() final {}
	//void g() final {}
};

struct B : A{
	//void f() {}
};
