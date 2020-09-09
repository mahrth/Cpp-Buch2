#include <iostream>
using namespace std;

int main() {
	double aRe = 1.0;
	double aIm = 2.0;
	cout << "a=" << aRe << "+" << aIm << "i\n";
	double bRe = 3.0;
	double bIm = 4.0;
	cout << "b=" << bRe << "+" << bIm << "i\n"; 	
	double cRe = aRe*bRe - aIm*bIm;
	double cIm = aRe*bIm + aIm*bRe;
	cout << "c=" << cRe << "+" << cIm << "i\n";
}
