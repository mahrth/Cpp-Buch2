void f1() {
	int a, b;
	int* p = &a;    
	*p = 1;   
	p = &b;   
}

void f2() {
	int a, b;
	const int* p = &a;
	*p = 1;  
	p = &b;
}

void f3() {
	int a, b;
	int* const p = &a;
	*p = 1; 
	p = &b; 
}

void f4() {
	int a, b;
	const int* const p = &a;
	*p = 1; 
	p = &b; 
}

int main() {
	f1();
	f2();
	f3();
	f4();
}
