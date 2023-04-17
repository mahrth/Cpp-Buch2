#include "MeinOstream.h"

int main() {
	mnr::meinCout << 1 << ": Operatornotation" << mnr::meinEndl; 
	((mnr::meinCout.operator<<(2)).operator<<(": Funktionsnotation")).operator<<(mnr::meinEndl); 
}
