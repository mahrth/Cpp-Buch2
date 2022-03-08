#include <vector>
using namespace std;

struct A {};

int main() {
	vector<int> v1 = {1,2,3};
	v1[1] = 7;
	//vector<const int> v2 = {1,2,3};
	//vector<int&> v2;
	A a1, a2;
	vector<A> v3 = {a1,a2};
	//vector<A&> v4 = {a1,a2};
	vector<A*> v5 = {&a1,&a2};
	v5[0] = nullptr;
}
