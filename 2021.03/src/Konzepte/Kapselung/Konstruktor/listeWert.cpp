#include <initializer_list>
using namespace std;		

struct A {
	int i=0;
	A(initializer_list<int> l) {
		for(auto e : l) { i += e; }
	}
};

int main() {
	A a{10,20,30};
    return a.i;
}
