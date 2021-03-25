class A;

struct B {
	void f(A& a);
};

class A {
private:
	friend void B::f(A&);
	int wert;                   
public:
	explicit A(int wert) : wert(wert) {}
};

void B::f(A& a) {
	a.wert = 42;
}   

int main() {
	A a{1};
	B b;
	b.f(a);
}
