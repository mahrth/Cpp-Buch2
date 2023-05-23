#include <iostream>
#include <memory>
using namespace std;

ostream& operator<<(ostream& os, const unique_ptr<int>& z) {
	if(z==nullptr) {
		os << " == nullptr"; 
	}
	else { 
		os << " zeigt auf " << *z;	
	}
	return os;
}

int main() {
	unique_ptr<int> z1(new int{8});
	cout << "1: z1" << z1;
	//unique_ptr<int> z2(z1);
	unique_ptr<int> z3(move(z1));
	cout << "\n2: z1" << z1;
	cout << "\n3: z3" << z3;
	unique_ptr<int> z4;
	//z4 = z3;
	z4 = move(z3);
	cout << "\n4: z3" << z3;
	cout << "\n5: z4" << z4 << endl;
}
