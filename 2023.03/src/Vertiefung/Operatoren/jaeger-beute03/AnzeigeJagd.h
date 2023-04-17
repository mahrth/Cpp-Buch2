#pragma once
#include "AnzeigeWesen.h"
class Wesen;

class AnzeigeJagd : public AnzeigeWesen {
public:
	AnzeigeJagd(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
