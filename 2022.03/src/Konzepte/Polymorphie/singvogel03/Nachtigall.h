#pragma once
#include "Singvogel.h"

struct Nachtigall : Singvogel {
	std::string singen() const { return "Gesang der Nachtigall"; }		
};
