#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = 1;
	float f = 2.3f;
	string s = to_string(i);
	cout << s << endl;
	s = "i=" + to_string(i) + ", f=" + to_string(f);
	cout << s << endl;
}
