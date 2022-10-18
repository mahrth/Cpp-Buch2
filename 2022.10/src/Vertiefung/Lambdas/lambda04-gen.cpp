#include <iostream>
using namespace std;

int main() {
	struct L {
		void operator()(int i) const { cout << i << endl; }
	};
	L f;
	f.operator()(1);
	f.operator()(2);
}

