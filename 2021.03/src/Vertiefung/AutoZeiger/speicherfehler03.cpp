int main() {
	int* i1 = new int;
	int* i2 = i1;
	delete i1;
	*i2 = 1;
}
