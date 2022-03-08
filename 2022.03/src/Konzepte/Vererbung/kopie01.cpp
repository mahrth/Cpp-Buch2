#include <iostream>
#include <string>
using namespace std;

class A {
private:
	int k;
public:
	A(int k) : k(k) {
		cout << "Konstruktor A\n";		
	}
	A(const A& a) : k(a.k) { 
		cout << "Kopierkonstruktor A\n";
	}	
	string text() const { 
		return "k=" + to_string(k);
	}
};

class B : public A {
private:
	int l;
public:
	B(int k, int l) : A(k), l(l) {
		cout << "Konstruktor B\n";		
	}
	B(const B& b) : A(b), l(b.l) { 
		cout << "Kopierkonstruktor B\n";
	}
	string text() const { 
		return A::text() + ", l=" + to_string(l);
	}
};

int main() {
	B b1(1,2); 
	cout << "b1: " << b1.text() << endl;
	B b2(b1); 
	cout << "b2: " << b2.text() << endl;
}

