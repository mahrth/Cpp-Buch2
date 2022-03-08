#include <iostream>
using namespace std;

auto erzeugen(int i) {
	int j = 1;
	return [=]() { 
		cout << "i=" << i << ", j=" << j << endl;
	};
}

int main() {
	auto f = erzeugen(3);
	f();
}
