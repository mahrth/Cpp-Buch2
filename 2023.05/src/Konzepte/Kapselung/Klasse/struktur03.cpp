struct S {
	int e;
};

int funktion(const S& s, int i) {
	return s.e*i;
}

int main() {
	S s = {2};
	return funktion(s,3);
}
