struct A {
	virtual void f() {} 
};
struct B : A {
	void f(); 
};
int main() {
	B b; 
}
