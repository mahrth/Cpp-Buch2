#pragma once
namespace Signalverarbeitung { class Signal; }

namespace Signalverarbeitung {
	class Prozessor{
	public:
		Signal verarbeiten(const Signal& eingang) const;
	};
}
