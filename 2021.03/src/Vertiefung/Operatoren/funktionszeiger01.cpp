#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int summe(const vector<int>& v, int (*f)(int)) {
	int summe=0;
	for(int i : v) { summe += f(i); }
	return summe;
}

int quadrat(int i) { return i*i; }
int wurzel(int i) { return sqrt(i); }

int main() {
	vector<int> v{4,9};
	cout << summe(v,quadrat) << endl;
	cout << summe(v,wurzel) << endl;
}
