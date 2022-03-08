#include "Komplex.h"
#include <iostream>
using namespace std;

template <typename S, typename T, unsigned int N> 
S f(const S& s, const T& t) {
	S r = s;
	for(unsigned int i=0; i<N; i++) {
		r = r * (t+i);
	}
	return r; 
}

int main() {
	int i = 2;
	double d = 0.12345;
	Komplex k{4.0,5.0};
	//f<double,Komplex,3>(i,k);
	cout << "1: " << f<int,int,3>(i,2);
	cout << "\n2: " << f<double,int,4>(d,i);
	cout << "\n3: " << f<Komplex,double,3>(k,d);
}
