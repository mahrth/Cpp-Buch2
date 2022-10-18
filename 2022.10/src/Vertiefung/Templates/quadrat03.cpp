#include <iostream>
#include <sstream>
using namespace std;

template <typename T> T quadrat(const T&);
string quadrat(const string&);
	
int main() {
	cout << "quadrat(3): " << quadrat(3)
		<< "\nquadrat(1.5): " << quadrat(1.5)
		<< "\nquadrat(string(\"2.5\")): " << quadrat(string("2.5")) << endl;
}

template <typename T> T quadrat(const T& x) {
	return x * x;
}

string quadrat(const string& x) {
	double d = stod(x);
	return to_string(d*d);
}
