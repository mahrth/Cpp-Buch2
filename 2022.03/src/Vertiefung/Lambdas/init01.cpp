struct A {
	int i;
};

int main() {
	const A a = [&] {
		A tmp;
		tmp.i = 1;
		return tmp;
	}();
}
