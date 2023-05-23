int main() {
	const int i1 = 1;
	int i2 = 2;
	int const* z1 = &i1;
	int* z2 = &i2;
	//z2 = z1;
	z1 = z2;
}


