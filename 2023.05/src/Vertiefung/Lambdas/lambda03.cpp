#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {	
	vector<int> v{1,2};
	for_each(v.begin(), v.end(), [](int i) { cout << i << endl; } );   
}
