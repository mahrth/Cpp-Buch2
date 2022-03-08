#include "Komplex.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

ostream& operator<<(ostream& os, const vector<Komplex>& v) {
	os << "[ ";
	for(auto e : v) { os << e << " "; }
	os << "]";
	return os;
}

class MinMaxSucher {
private:
	const Komplex *_min=nullptr, *_max=nullptr; 
public:
	const Komplex* min() const { return _min; } 
	const Komplex* max() const { return _max; } 
	void operator()(const Komplex& k) { 
		if(_min==nullptr) { _min = &k; }
		else if(double(k)<double(*_min)) { _min = &k; }
		if(_max==nullptr) { _max = &k; }
		else if(double(k)>double(*_max)) { _max = &k; }
	}
};

int main() {
	vector<Komplex> v = { Komplex{3.0,-4.0}, Komplex{1.0,2.0}, Komplex{-5.0,-6.0} };
	cout << "v = " << v << endl;
	MinMaxSucher sucher = for_each(v.begin(), v.end(), MinMaxSucher{});
	cout << "min: " << *(sucher.min()) << endl; 
	cout << "max: " << *(sucher.max()) << endl; 
}
