struct S {
	int e;
	int funktion(int i) {
		return e*i;
	}
};

int main() {
	S s = {2};
	return s.funktion(3);
}
