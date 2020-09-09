#include <iostream>
#include <vector>
using namespace std;

int main () {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30); 
	for(unsigned int i=0; i < v.size(); i++) {
		cout << "v[" << i << "] = " << v[i] << endl;
	}
	cout << v[3] << endl;
	//cout << v.at(3) << endl;
}
