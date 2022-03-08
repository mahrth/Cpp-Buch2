#pragma once
#include "Planet.h"
#include "Stern.h"
#include <string>
#include <vector>

namespace Astro {
	class Sonnensystem {
	private:
		const Stern& zentralgestirn;
		std::vector<const Planet*> planet;
	public:
		explicit Sonnensystem(const Stern& stern);
		void fuegeHinzu(const Planet& p);
		std::string text() const;
	};
}
