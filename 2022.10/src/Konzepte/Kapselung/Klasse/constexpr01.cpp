int main() {
	int i = 1;
	constexpr int e1 = 1;
	const int c1 = 2;
	constexpr int e2 = c1;
	const int c2 = e2;
	constexpr int e3 = e2;
	const int c3 = i;
	//constexpr int e4 = i;
	//constexpr int e5 = c3;
	constexpr int e6 = c2;
	//e6++;
}
