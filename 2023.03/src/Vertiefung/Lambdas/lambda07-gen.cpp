#include <iostream>
using namespace std;

auto erzeugen(int i) {
	int j = 1;
	class L {
	private: 
		int i, j;
	public: 
		L(int _i, int _j) : i{_i}, j{_j}	{}
		void operator()() const {
			cout << "i=" << i << ", j=" << j << endl;
		}		
	};	
	return L{i, j};
}

int main() {
	auto f = erzeugen(3);
	f.operator()();
}

