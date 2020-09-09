#include <iostream>
#include <string>
using namespace std;

struct B {
	int i = 0;	
	double d = 0;
	const bool b = false;
	B()	{
		cout << "B:B()" 
		<< "\ni=" << i << " d=" << d << " b=" << b << endl;
	}
};

int main() {
	B b;
}

