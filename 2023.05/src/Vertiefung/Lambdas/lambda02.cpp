#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{1,2};
	struct Funktor {
		void operator()(int i) const {
			cout << i << endl;
		}
	};
	for_each(v.begin(), v.end(), Funktor{});
}
