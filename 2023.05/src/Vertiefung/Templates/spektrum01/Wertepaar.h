#pragma once
#include "Komplex.h"

template <typename X, typename Y>
struct Wertepaar {	
	const X x;	
	const Y y;	
	constexpr Wertepaar(const X& x, const Y& y) : x{x}, y{y} {}
};

template <typename X, typename Y>
std::ostream& operator<<(std::ostream& os, const Wertepaar<X,Y>& w) {
	os << w.x << ": " << w.y;
	return os;		
}
