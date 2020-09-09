struct A {
private:
	int i;
	void f() {}
public:
	void g() {
		i = 0;
		f();		
		A a2; 
		a2.i = 0;	
		a2.f();	
	}
};

struct B {
	void h() {
		A a3;  
		// a3.i = 0;
		// a3.f();			
	}
};

int main() {
	A a1;
	a1.g();
	B b;
	b.h();
}
	
