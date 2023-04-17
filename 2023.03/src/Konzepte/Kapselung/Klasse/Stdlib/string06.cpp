#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int i = 1;
	float f = 2.3f;
	string s = "i=" + to_string(i) + ", f=" + to_string(f);
	cout << s;	
	stringstream ss;
	ss << endl << "i=" << i << ", f=" << f;
	s = ss.str();
	cout << s << endl;
}
