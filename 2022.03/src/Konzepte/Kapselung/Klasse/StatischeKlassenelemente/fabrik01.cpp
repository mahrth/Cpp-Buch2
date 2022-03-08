#include <iostream>
using namespace std;

class A {
private:
	A() { cout << "Konstruktor\n"; }	
	A(const A&) = delete; 
	static A* _instanz; 
public:
	static A* instanz() {
		if(_instanz==nullptr) {	_instanz = new A(); }
		return _instanz;
	}
};
A* A::_instanz = nullptr;

int main() {
	A* a1 = A::instanz();
	A* a2 = A::instanz();
	cout << "Adresse a1: " << a1 << ", Adresse a2: " << a2 << endl;
	delete a1;
}
