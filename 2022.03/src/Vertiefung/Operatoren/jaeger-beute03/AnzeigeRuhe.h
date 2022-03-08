#pragma once
#include "AnzeigeWesen.h"
class Wesen;

class AnzeigeRuhe : public AnzeigeWesen {
public:
	AnzeigeRuhe(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
