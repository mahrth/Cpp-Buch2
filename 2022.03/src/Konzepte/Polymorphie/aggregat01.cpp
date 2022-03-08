#include <iostream>
#include <type_traits>
using namespace std;

struct A { int i; };
class B { int i; };
struct C { C() {} };
struct D { D() = default; };
struct E { virtual void f() {} };
struct F : C, D {
    E e;
    F() = default;
    ~F() {}
private:
    static int i;
    void h() {}
};

int main() {
	cout << boolalpha;
	cout << "A: " << is_aggregate<A>();
	cout << "\nB: " << is_aggregate<B>();
	cout << "\nC: " << is_aggregate<C>();
	cout << "\nD: " << is_aggregate<D>();
	cout << "\nE: " << is_aggregate<E>();
	cout << "\nF: " << is_aggregate<F>();
	cout << endl;
}
