#include <iostream>
#include <vector>
using namespace std;

int main() {
	int daten[3] = {1,2,3};
	for(auto d : daten) {
		cout << d << " ";
	}
	cout << endl;

	for(auto e : {10,20,30}) {
		cout << e << " ";
	}
	cout << endl;

	vector<int> v{111,222,333};
	for(auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}
