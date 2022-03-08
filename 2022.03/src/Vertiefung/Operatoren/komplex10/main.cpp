#include "Komplex.h"
#include <iostream>
#include <limits>
using namespace std;

int main() {
	const int N = 3;
	Komplex k[N];
	int i=0;
	while(i<N) {
		cout << "Real- und Imaginärteile für k[" << i << "] eingeben: ";
		cin >> k[i];
		if(cin) {
			cout << "k[" << i << "] = " << k[i] << endl; 
			i++;
		}
		else {
			cout << "Eingabefehler\n";
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
}
