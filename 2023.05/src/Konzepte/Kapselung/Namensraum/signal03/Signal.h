#pragma once
#include <string>
#include <vector>

namespace Signalverarbeitung{
	class Signal{
	private:
		std::vector<double> daten;
	public:		
		Signal(){} 
		int anzahl() const { return daten.size(); }
		double wert(const int index) const { return daten[index]; }
		void anhaengen(const double wert){ daten.push_back(wert); }
		std::string text() const;
	};
}
