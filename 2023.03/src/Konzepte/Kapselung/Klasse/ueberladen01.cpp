#include <iostream>
using namespace std;

const char* f() { return "f()"; } 
const char* f(int) {  
	return "f(int)"; 
}
const char* f(double) {	
	return "f(double)"; 
}
const char* f(int,int) {  
	return "f(int,int)"; 
}
const char* f(unsigned int) {   
	return "f(unsigned int)"; 
}
const char* f(signed short int) {   
	return "f(signed short int)"; 
}
const char* f(unsigned short int) {   
	return "f(unsigned short int)"; 
}
const char* f(signed long int) {   
	return "f(signed long int)"; 
}
const char* f(unsigned long int) {   
	return "f(unsigned long int)"; 
}

int main() {
	int i=0, j=0;
	double d=0.0;
	cout << "f()    -> " << f()
		<< "\nf(i)   -> " << f(i)
		<< "\nf(d)   -> " << f(d)
		<< "\nf(i,j) -> " << f(i,j)
		<< "\nf(1)   -> " << f(1)
		<< "\nf(-1)  -> " << f(-1)
		<< "\nf(1u)  -> " << f(1u)
		<< "\nf(1L)  -> " << f(1L)
		<< "\nf(-1L) -> " << f(-1L)
		<< "\nf(1uL) -> " << f(1uL)	<< endl;
}
