#include <iostream>
#include <climits> 
using namespace std;

int main() {
	int i = 0;	
	do	{
		cout << "Ganzzahl eingeben (Ende mit 9999): ";
		cin >> i;
		if (cin) {
			cout << "Eingabe ok, i = " << i << "\n";
		}
		else {
			cout << "Eingabefehler\n";
			cin.clear(); 
			cin.ignore(INT_MAX, '\n'); 
		}
	} while (i != 9999);
}
