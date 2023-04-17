struct A {
	void f(); 
};
struct B : A { 
	void f() {} 
};
int main() {
	B b; 
	b.f(); 
}
