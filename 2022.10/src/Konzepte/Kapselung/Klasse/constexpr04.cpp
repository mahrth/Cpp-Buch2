constexpr int quadrat(int i) {
	return i*i; 
}

int main() {
	int i = 3;
	const int j = quadrat(i);
	//constexpr int k = quadrat(i);
}
