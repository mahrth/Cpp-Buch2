#include <iostream>
using namespace std;

const char* f(int* i) { return "f(int*)"; }
//const char* f(int const* i) { return "f(int const*)"; }

int main() {
	int i;
	int* z = &i;
	int const* zc = &i;
	int* const cz = &i;
	int const* const czc = &i;
	cout << "int*             -> " << f(z)
		//<< "\nint const*       -> " << f(zc)
		<< "\nint* const       -> " << f(cz)
		// << "\nint const* const -> " << f(czc)
		<< endl;
}


