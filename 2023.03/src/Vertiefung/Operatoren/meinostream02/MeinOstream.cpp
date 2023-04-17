#include "MeinOstream.h"
#include <cstdio>

namespace mnr {
	MeinOstream& MeinOstream::operator<<(const char c) {
		std::printf("%c",c);
		return *this;
	}
	MeinOstream& MeinOstream::operator<<(const char* const s) {
		std::printf("%s",s);
		return *this;
	}
	MeinOstream& MeinOstream::operator<<(const int i ) {
		std::printf("%d",i);
		return *this;
	}
	MeinOstream& MeinOstream::operator<<(const double d ) {
		std::printf("%f",d);
		return *this;
	}		
	MeinOstream meinCout;
	const char meinEndl = '\n';
}
