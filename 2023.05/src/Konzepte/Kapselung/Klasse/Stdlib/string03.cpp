#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Ich bin eine leere Zeichenkette. " << s << endl;
	cout << "Bitte befuelle mich: "; 
	getline(cin,s);
	cout << "Jetzt sehe ich so aus: " << s << endl;
}
