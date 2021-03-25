#include <iostream>
using namespace std;

auto erzeugen(int i) {
	int j = 0;
	return [=]() mutable {
		cout << "i=" << (--i) << ", j=" << (++j) << endl;		
	};
}

int main() {
	auto f1 = erzeugen(5);
	f1();
	f1();
	f1();
	auto f2 = erzeugen(8);
	f2();
	f2();
	f2();
}
