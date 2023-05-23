#include "Komplex.h"
#include <iostream>
using namespace std;

int main() {
	auto quadrat = [](auto a) { return a*a; };
	cout << quadrat(2) << endl;
	cout << quadrat(2.5) << endl;
	cout << quadrat(Komplex{1,2}) << endl;
}
