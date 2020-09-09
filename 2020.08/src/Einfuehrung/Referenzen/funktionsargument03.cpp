#include <iostream> 
using namespace std;

void f2(const int* z) { 
	cout << "f2(const int*): Lesende Übergabe per Zeiger\n";
	//(*z)++;
}

void f3(const int& r) { 
	cout << "f3(const int&): Lesende Übergabe per Referenz\n";
	//r++;
}

int main() {
	int i = 0;
	f2(&i); 
	f3(i); 
}
