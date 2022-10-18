int main() {
	int i=1, j=2;
	int* const z1 = &i;
	int const* const z2 = &j;
	*z1 = *z2;
}


