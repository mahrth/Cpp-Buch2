#include "Bild.h"
using namespace std;

int main() {
	Bild b1(3,2,"b1"); 
	b1.setzePixel(0,0,10);
	b1.setzePixel(2,1,20);
	Bild b2(b1); 
	cout << b1 << ", " << b2 << endl;
	Bild b3(move(b1));
	cout << b1 << ", " << b3 << endl;
	Bild b4(3,4,"b4");
	cout << b4 << endl;
	b4 = b3;
	cout << b4 << endl;
	b4.setzePixel(1,0,33);
	b4.setzePixel(1,1,99);
	cout << b4 << endl;
	b1 = move(b4);
	cout << b1 << ", " << b4 << endl;
}
