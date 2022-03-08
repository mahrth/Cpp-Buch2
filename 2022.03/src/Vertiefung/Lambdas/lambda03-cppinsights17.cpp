#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = std::vector<int, std::allocator<int> >{std::initializer_list<int>{1, 2}, std::allocator<int>()};
	
	class __lambda_8_34 {
	public: 
		inline /*constexpr */ void operator()(int i) const {
			std::cout.operator<<(i).operator<<(std::endl);
		}
		using retType_8_34 = void (*)(int);
		inline /*constexpr */ operator retType_8_34 () const noexcept {
			return __invoke;
		};
	private: 
		static inline void __invoke(int i) {
			std::operator<<(std::cout, "Lamda-Funktion: i=").operator<<(i).operator<<(std::endl);
		}
	public: 
		// inline /*constexpr */ __lambda_8_34(__lambda_8_34 &&) noexcept = default;
	};
	
	std::for_each(v.begin(), v.end(), __lambda_8_34{});
}

