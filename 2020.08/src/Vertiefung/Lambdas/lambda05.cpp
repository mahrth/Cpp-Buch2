#include <functional>
#include <iostream>

int main() {
    std::function<void(int)> f = [](int i) { std::cout << i << std::endl; };
    f(1);
    f(2);
}
