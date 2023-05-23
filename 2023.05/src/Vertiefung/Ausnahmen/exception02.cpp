#include <iostream>
#include <stdexcept> 
using namespace std;

const char* f(int n) {
	const char* s;
	switch(n) {
		case 0: 
			s = "Null";
			break;
		case 1:
			s = "Eins";
			break;
		default:
			throw invalid_argument("Argument muss im Bereich 0..1 liegen"); 
	}
	return s;
}

int main() {
	try	{
		cout << f(0) << endl;
		cout << f(1) << endl;
		cout << f(2) << endl;
	}
	catch(const invalid_argument& e) {
		cout << e.what() << endl;
	}
}
