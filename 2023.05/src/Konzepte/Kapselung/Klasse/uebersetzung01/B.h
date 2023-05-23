#pragma once
#include "A.h"
struct B {
	A a;
	void g() { a.f(); }
};
