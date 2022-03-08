#include <iostream>
using namespace std;

auto erzeugen(int& i) {
	return [&]() { i++; };
}

int main() {
	int i=0;
	auto f = erzeugen(i);
	f();
	cout << i << endl;
	f();
	cout << i << endl;
	f();
	cout << i << endl;
}
