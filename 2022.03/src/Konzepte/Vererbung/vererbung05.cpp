struct A {
	void f() {}
private:
	void g() {}
};

struct B : A {
	void h() {
		f();
		//g();
	}
};

int main() {}

