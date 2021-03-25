struct A {
	int n;
	inline A operator+(const A & a) const { 
		return A{this->n + a.n}; 
	}
};

A operator+(const A & a1, const A & a2) { 
	return A{a1.n + a2.n};
}

A operator-(const A & a1, const A & a2) { 
	return A{a1.n - a2.n};
}

int main() {
	const A a1 = {5};
	const A a2 = {3};
	A a4 = operator-(a1, a2);
}

