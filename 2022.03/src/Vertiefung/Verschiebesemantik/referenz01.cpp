#include <utility>

struct A {
	int k;
	A(int k) : k(k)	{}
};

int main() {
	A a1{1};
	const A a2{2};
	//A&& r1 = a1;
	//const A&& r1 = a2;
	A&& r2 = A{2};
	r2.k++;
	A&& r3 = std::move(a1);
	const A&& r4 = std::move(a2);
}


 
