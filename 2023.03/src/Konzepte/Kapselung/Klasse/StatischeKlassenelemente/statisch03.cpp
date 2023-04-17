struct A {
	static const int n = 12; 
	const int m = 7; 
	static int f1() { return n; } 
	static int f2(); 
	int g1() { return n; } 
	int g2() { return f1(); } 
};

int A::f2() { 
	int i = n;
	//i += m;
	//i += g1();
	return i; 
}

int main() {
	A::f1();
	//A::g1();
	A a;
	a.f1();
}
