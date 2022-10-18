class A {
private:
	friend void g(A&);
	int wert;
public:
	explicit A(int wert) : wert(wert) {}
};

void g(A& a) {
	a.wert = 12;           
}

int main() {
	A a{1};
	g(a);
}
