class A {
private:
	friend class B; 
	int wert;                   
public:
	explicit A(int wert) : wert(wert) {}
};

struct B {
	void f(A& a){
		a.wert = 12;
	}   
};

int main() {
	A a{1};
	B b;
	b.f(a);
}
