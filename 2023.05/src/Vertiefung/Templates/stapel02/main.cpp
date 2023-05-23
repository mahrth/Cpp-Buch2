#include "Stapel.h"
using namespace std;

int main() {
	Stapel stapel; 
	Stapel::T wert = 10;
	while (stapel.auflegen(wert)) { wert += 10; }
	while (stapel.abheben(wert));
}
