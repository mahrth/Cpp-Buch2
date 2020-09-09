#include "Signal.h"
#include <iostream>
using namespace std;

int main() {
	Signal signal;
	signal.generieren(3,2.0);
	cout << signal.text() << endl;
}
