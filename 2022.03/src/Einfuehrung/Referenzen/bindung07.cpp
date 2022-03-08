#include <iostream>
using namespace std;

const char* f(int& i) { return "f(int&)"; }
const char* f(int const& i) { return "f(int const&)"; }
int main() {
	int i=0;
	int const c=0;
	cout << "int       -> " << f(i)
		<< "\nint const -> " << f(c) << endl;
}


