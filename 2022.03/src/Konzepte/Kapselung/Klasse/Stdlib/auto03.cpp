#include <iostream>
#include <string>
using namespace std;

auto f(auto& a) {
	cout << a << " + " << a << " = ";
	return a+a;
}

int main() {
	int k = 2;
    string s = "xyz";
    cout << f(k) << endl;
    cout << f(s) << endl;
}
