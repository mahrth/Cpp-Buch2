#include <iostream>
using namespace std;

int main() {
    auto f1 = [](int i) { return i*i; };
    cout << f1(4) << endl;
    auto f2 = [](int i, double d) { return i*d; };
    cout << f2(3, 1.5) << endl;
    auto f3 = [](int i, double d) -> int { return i*d; };
    cout << f3(3, 1.5) << endl;
}
