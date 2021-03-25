#include <iostream>
using namespace std;

struct A {
	int i;
};

int main() {
	class __lambda_6_14 {
	public: 
		inline /*constexpr */ A operator()() const {
			A tmp = A() /* NRVO variable */;
			tmp.i = 1;
			return A(tmp);
		}
	} __lambda_6_14{};

	const A a = __lambda_6_14.operator()();
	cout << a.i;
}

