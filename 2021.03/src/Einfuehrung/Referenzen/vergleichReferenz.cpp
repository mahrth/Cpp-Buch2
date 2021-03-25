int main() {
	int i=1, j=2;
	int& r1 = i;
	int const& r2 = j;
	r1 = r2;
}


