#include "A.h"
int f(const int& x) { return x*x; }
template <typename T> T g(const T& x) {
	return x*x; 
}
template int g(const int&);
