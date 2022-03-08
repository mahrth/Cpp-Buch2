#pragma once
#include "Signal.h"

namespace Signalverarbeitung {
	class Prozessor{
	public:
		Signal verarbeiten(const Signal&) const;
	};
}
