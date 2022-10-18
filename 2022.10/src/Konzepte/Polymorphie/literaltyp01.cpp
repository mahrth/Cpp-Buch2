#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

struct A {};
struct B { B() = default; };
struct C { C() {} };
struct D { constexpr D() {} };
struct E { 
	constexpr E() {} 
	E(const E&) {}
};
struct F {
	F() {} 
	constexpr F(const F&) {} 
};
struct G { ~G() = default; };
struct H { ~H() {} };
struct I { constexpr ~I() {} };
struct J { virtual void f() {} };
struct K { string s; };

int main() {
	cout << boolalpha;
	cout << "A: " << is_literal_type<A>();
	cout << "\nB: " << is_literal_type<B>();
	cout << "\nC: " << is_literal_type<C>();
	cout << "\nD: " << is_literal_type<D>();
	cout << "\nE: " << is_literal_type<E>();
	cout << "\nF: " << is_literal_type<F>();
	cout << "\nG: " << is_literal_type<G>();
	cout << "\nH: " << is_literal_type<H>();
	cout << "\nI: " << is_literal_type<I>();
	cout << "\nJ: " << is_literal_type<J>();
	cout << "\nK: " << is_literal_type<K>();
	cout << endl;
}
