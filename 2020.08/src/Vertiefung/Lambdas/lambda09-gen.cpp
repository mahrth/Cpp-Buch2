#include <iostream>
using namespace std;

auto erzeugen(int& i){
	class L {
	private: 
		int& i;
	public: 
		L(int & _i) : i{_i} {}
		void operator()() const { i++; }
	};
	return L{i};
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

