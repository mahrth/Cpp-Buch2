#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{1,2,3};	
	for(auto e : v)	{
		cout << e << " ";
	}
	cout << endl;	
	for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
		int e = *it;
		cout << e << " ";
	}
	cout << endl;
}
