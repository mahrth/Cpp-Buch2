#pragma once
#include "Komplex.h"
#include <array>

template<size_t N, size_t M>
class Tabelle {
private:
	constexpr static auto init() {
		std::array<Komplex, N*M> a;
		const double c = -2*M_PI/N;
		for(size_t i=0; i<N*M; i++) {
			a[i] = Komplex{cos(c*i), sin(c*i)};
		}
		return a;
	}
public:
	const std::array<Komplex, N*M> werte;
	constexpr Tabelle() : werte{init()} {}
};
