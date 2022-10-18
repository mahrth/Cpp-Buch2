#include "MeinOstream.h"
#include "Komplex.h"
using namespace mnr;

int main() {
	Komplex k1{2,3}, k2{3,4};
	meinCout << "k1 = " << k1 << ", k2 = " << k2 << meinEndl; 
}
