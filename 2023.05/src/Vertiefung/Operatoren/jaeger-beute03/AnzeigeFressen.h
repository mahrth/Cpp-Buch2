#pragma once
#include "AnzeigeWesen.h"
class Wesen;

class AnzeigeFressen : public AnzeigeWesen {
public:
	AnzeigeFressen(Wesen& wesen) : AnzeigeWesen(wesen) {}
};
