#include "Komplex.h"
#include "Vektor.h"
#include <iostream>
using namespace std;

int main() {
	Komplex k = Komplex{1.0};
	cout << "k = " << k.text() << endl;
	Vektor v1 = Vektor{k};
	cout << "v1 = " << v1.text() << endl;
	Vektor v2 = (Vektor)k;
	cout << "v2 = " << v2.text() << endl;
	Vektor v3 = static_cast<Vektor>(k);
	cout << "v3 = " << v3.text() << endl;
	Vektor v4 = Vektor{Komplex{2.0}};
	cout << "v4 = " << v4.text() << endl;
}
