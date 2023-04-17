#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{10,20,30}; 
	for(unsigned int i=0; i < v.size(); i++) {
		cout << "v[" << i << "] = " << v[i] << endl;
	}
}
