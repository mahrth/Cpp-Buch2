#include <iostream>
using namespace std;

struct A {
	int i;
	A(int i) : i{i} {}
	auto erzeugen() {
		class L {
		private: 
			A* _this;
		public: 
			L(A* _this) : _this{_this} {}
			void operator()() const { _this->i++; }
		};
		return L{this};
	}
};

int main() {
	A a{0};
	auto f = a.erzeugen();
	f();
	cout << a.i << endl;
	f();
	cout << a.i << endl;
}
