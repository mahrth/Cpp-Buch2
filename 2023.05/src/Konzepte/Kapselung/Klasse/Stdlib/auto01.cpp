#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1{10,20,30}; 
	cout << "v1 = [ ";
	for(auto e : v1) {
		cout << e << " ";
	}
	cout << "]" << endl;
	
	vector<int>* v2 = new vector<int>;
	delete v2;

	auto* v3 = new vector<int>;
	delete v3;
}
