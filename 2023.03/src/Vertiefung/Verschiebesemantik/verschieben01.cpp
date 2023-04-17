#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1("ABC");
	string s2;
	cout << "s1=" << s1 << ", s2=" << s2;
	cout << "\nInhalt kopieren:";
	s2 = s1; 
	cout << "\ns1=" << s1 << ", s2=" << s2;
	s2 = "";
	cout << "\ns1=" << s1 << ", s2=" << s2;
	cout << "\nInhalt verschieben:";
	s2 = move(s1); 
	cout << "\ns1=" << s1 << ", s2=" << s2 << endl;
}
