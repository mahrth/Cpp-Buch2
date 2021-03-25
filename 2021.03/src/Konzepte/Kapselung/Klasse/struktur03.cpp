struct S {
	int e;
};

int f(const S& s, int i) {
	return s.e*i;
}

int main() {
	S s = {3};
	int i = f(s,2);
}
