#pragma once
#include "AnzeigeWesen.h"
class Wesen;

class AnzeigeFlucht : public AnzeigeWesen {
public:
	AnzeigeFlucht(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
