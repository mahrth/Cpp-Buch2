struct S {
	int e;
	int f(int i) {
		return e*i;
	}
};

int main() {
	S s = {3};
	int i = s.f(2);
}
