#include "Stapel.h"
#include <iostream>
using namespace std;

int main() {
	Stapel<> stapel1; 
	double d = 1.1;
	while (stapel1.auflegen(d)) { d += 1.1; }
	while (stapel1.abheben(d));
	Stapel<int> stapel2; 
	int i = 11;
	while (stapel2.auflegen(i)) { i += 10; }
	while (stapel2.abheben(i));
	Stapel<char,3> stapel3; 
	char c = 'A';
	while (stapel3.auflegen(c)) { c++; }
	while (stapel3.abheben(c));
}
