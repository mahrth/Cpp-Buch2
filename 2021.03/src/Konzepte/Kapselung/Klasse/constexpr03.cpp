int quadrat1(int i) {
	return i*i; 
}

constexpr int quadrat2(int i) {
	return i*i; 
}

int main() {
	const int c1 = quadrat1(4);
	//constexpr int e1 = quadrat1(2);
	const int c2 = quadrat2(5);
	constexpr int e2 = quadrat2(6);
	//constexpr int e3 = c1;
	constexpr int e4 = c2;
	static_assert(quadrat2(4)==16, "Fehler");
	//static_assert(quadrat1(4)==16, "Fehler");
}
