#include "Stapel.h"
using namespace std;

int main() {
	Stapel stapel;
	double wert = 1.1;
	while (stapel.auflegen(wert)) {	wert += 1.1; }
	while (stapel.abheben(wert)); 
}
