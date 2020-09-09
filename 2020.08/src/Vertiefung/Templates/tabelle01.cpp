#include <array>
#include <iostream>
using namespace std;

template<typename T, size_t N>
constexpr auto init(const T& t) {
	array<T,N> a = {};
	for (size_t i=0; i<N; ++i) { a[i] = t*i; } 
	return a;
}

int main() {
	constexpr auto t1 = init<double, 4>(0.3);
	constexpr auto t2 = init<int, 5>(4);
	for(auto e: t1) { cout << e << " ";	} 
	cout << endl;
	for(auto e: t2) { cout << e << " ";	}
	cout << endl;
}
