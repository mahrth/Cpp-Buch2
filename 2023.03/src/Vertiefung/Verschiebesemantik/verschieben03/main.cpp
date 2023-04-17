#include "A.h"
using namespace std;

int main() {
	A a{1,2,3}, b{4,5}; 
	cout << "a=" << a << ", b=" << b << endl;
	A::tauschePerKopie(a,b);
	cout << "a=" << a << ", b=" << b << endl;
	A::tauschePerVerschiebung(a,b);
	cout << "a=" << a << ", b=" << b << endl;
}
