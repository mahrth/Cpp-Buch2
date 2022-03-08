#include "Nachtigall.h"
#include "Blaumeise.h"
#include "Benutzer.h"

int main() {
	Benutzer benutzer;
	Nachtigall nachtigall;
	Blaumeise blaumeise;
	benutzer.f(nachtigall);	
	benutzer.f(blaumeise);	
}
