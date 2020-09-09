#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{10,20,30}; 
	cout << "v = [ ";
	for(auto e : v) {
		cout << e << " ";
	}
	cout << "]" << endl;
}
