#pragma once
#include "Signal.h"
#include "Tabelle.h"

template <size_t N, size_t M>
class Dft {
private:
	constexpr static Tabelle<N,M> tab{};
public:
	constexpr Signal dft(const Signal& ein) const {
		Signal aus;
		for(unsigned int m=0; m<M; m++) {
			Komplex sum{0,0};
			for(unsigned int n=0; n<ein.laenge(); n++) {
				sum = sum + ein.wert(n).y * tab.werte[m*n];
			}
			sum = sum * (1.0/ein.laenge());
			aus.hinzufuegen(Signal::Paar{1.0*m, sum});
		}
		return aus;
	}
};
