#include "Komplex.h"
#include <iostream>
using namespace std;

template <typename S=int, typename T=int, unsigned int N=1> 
S f(const S& s, const T& t) {
	S r = s;
	for(unsigned int i=0; i<N; i++) {
		r = r * (t+i);
	}
	return r; 
}

int main() {
	Komplex k{4.0,5.0};
	cout << "1: " << f<>(2,3);
	cout << "\n2: " << f<Komplex>(k,4);
	cout << "\n3: " << f<double,double>(2.5,1.7);
}
