#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void f(int i) { cout << "f(int): i=" << i << endl; }

struct A {
	void operator()(int i) { 
		cout << "A::operator()(int): i=" << i << endl; 
	} 
};

int main() {
    vector<int> v{1,2};
    for_each(v.begin(), v.end(), f); 
    for_each(v.begin(), v.end(), A{});
}
