#pragma once

namespace mnr {
	class MeinOstream {
	public:
		MeinOstream& operator<<(const char);
		MeinOstream& operator<<(const char* const);
		MeinOstream& operator<<(const int);
		MeinOstream& operator<<(const double);
	};
	extern MeinOstream meinCout;
	extern const char meinEndl;
}
