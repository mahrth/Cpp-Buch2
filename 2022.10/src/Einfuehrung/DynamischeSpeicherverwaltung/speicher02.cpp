int main() {
	int i = 1;  
	int j[] = {2,3};  
	int* k = new int;  
	*k = 4;  
	delete k;  
	int* l = new int[2];  
	l[0] = 5;  
	l[1] = 6;  
	delete[] l;  
}
