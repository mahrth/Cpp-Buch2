#include <iostream>
using namespace std;

class Berechnung {
protected:
	int op1=0, op2=0, res=0;
public:
	Berechnung(int x) : op1{x} {}
	Berechnung(int x, int y) : op1{x}, op2{y} {}
	int resultat() const { return res; }
	void berechnen() {}
};

struct Addition : Berechnung {
	using Berechnung::Berechnung;
	void berechnen() { res = op1+op2; }
};

struct Subtraktion : Berechnung {
	using Berechnung::Berechnung;
	void berechnen() { res = op1-op2; }
};

int main() {
	Addition b1{1}; b1.berechnen();
	Addition b2{2,3}; b2.berechnen();
	Subtraktion b3{6}; b3.berechnen();
	Subtraktion b4{8,5}; b4.berechnen();
	cout << b1.resultat() << " " << b2.resultat() << " " << b3.resultat() << " " << b4.resultat() << endl;
}

