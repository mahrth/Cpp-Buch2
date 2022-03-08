#pragma once
#include <string>

namespace Astro {
	class Stern {
	private:
		const std::string _name;
	public:
		explicit Stern(const std::string& name);
		std::string name() const;
	};
}
