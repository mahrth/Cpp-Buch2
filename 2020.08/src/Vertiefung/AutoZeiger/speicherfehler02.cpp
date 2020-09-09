#include <iostream>
#include <stdexcept>
using namespace std;

void e() {
	throw exception();
}

void f() {
	int* zi = new int[10]; 
	e();
	delete[] zi;
}

int main() {
	try{ f(); }  
	catch(const exception& e) { 
		cout << "Ausnahme in main() gefangen\n";
	}
}
