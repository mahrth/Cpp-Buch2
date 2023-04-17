#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Funktor {
	void operator()(int i) const { cout << i << endl; }
};

int main() {
	vector<int> v{1,2};
	for_each(v.begin(), v.end(), Funktor{});
}
