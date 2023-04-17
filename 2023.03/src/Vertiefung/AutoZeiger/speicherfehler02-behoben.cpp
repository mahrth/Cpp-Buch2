#include <iostream>
#include <stdexcept>
using namespace std;

void e() {
	throw exception();
}

void f() {
	int* zi = new int[10];
	try { e(); }
	catch(const exception& e){
		cout << "Ausnahmen in f() gefangen\n";
	}
	delete[] zi;
}

int main() {
	f();
}
