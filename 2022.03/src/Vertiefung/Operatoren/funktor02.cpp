#include <iostream>
using namespace std;

struct Funktor {
    void operator()() const { cout << "operator()()\n"; }
    void operator()(int) const { cout << "operator()(int)\n"; }
    void operator()(int,int,int) const { cout << "operator()(int,int,int)\n"; }
};

int main() {
    const Funktor f;
    f();
    f(1);
    f(2,3,4);
}
