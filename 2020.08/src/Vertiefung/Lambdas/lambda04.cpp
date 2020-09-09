#include <iostream>
using namespace std;

int main() {
    auto f = [](int i) { cout << i << endl; };
    f(1);
    f(2);
}
