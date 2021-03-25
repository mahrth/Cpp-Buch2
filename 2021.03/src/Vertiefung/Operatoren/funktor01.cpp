#include <iostream>
using namespace std;

struct A {
    void operator()(int i) const {
        cout << "operator()(int): i=" << i << endl;
    }
};

int main() {
    const A a;
    a.operator()(1);
    a(2);
}
