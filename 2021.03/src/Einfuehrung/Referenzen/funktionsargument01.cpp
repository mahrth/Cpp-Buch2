#include <iostream> 
using namespace std;

void f1(int i) {  
	cout << "f1(int):  i=" << i << ", Adresse des Wertes: " << &i << endl;
}

void f2(int* z) { 
	cout << "f2(int*): *z=" << *z << ", Wert des Zeigers: " << z << endl;
}

void f3(int& r) { 
	cout << "f3(int&): r" << r << ", Adresse der Referenz: " << &r << endl;
}

int main() {
	int i = 12;
	cout << "Wert von i: " << i << ", Adresse von i: " << &i << endl;
	f1(i); 
	f2(&i); 
	f3(i); 
}
