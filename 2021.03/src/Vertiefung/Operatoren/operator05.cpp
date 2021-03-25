struct A {
	int n;
	A operator+(const A& a) const { 
		return A{n+a.n}; 
	}
};

A operator+(const A& a1, const A& a2) {
	return A{a1.n+a2.n}; 
}

A operator-(const A& a1, const A& a2) {
	return A{a1.n-a2.n}; 
}

int main() {
	const A a1{5}, a2{3};
	//A a3 = a1 + a2;
	A a4 = a1 - a2;
}
