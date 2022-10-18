#include <iostream>
using namespace std;

class A {
private:
	const int _kennung;
	static int _nErzeugt;
	static int _nAktiv;
public:
	A() : _kennung(++_nErzeugt) { _nAktiv++; }
	~A() { _nAktiv--; }
	int kennung() const { return _kennung; }
	static int nErzeugt() {	return _nErzeugt; } 
	static int nAktiv() { return _nAktiv; } 
};

int A::_nErzeugt = 0;
int A::_nAktiv = 0;

int main() {
	cout << "Aktive Objekte: " << A::nAktiv();
	A d1;
	cout << "\nd1.kennung(): " << d1.kennung();
	cout << "\nAktive Objekte: " << A::nAktiv();
	cout << "\nKontext betreten";
	{
		A d2; 
		cout << "\nd2.kennung(): " << d2.kennung();
		cout << "\nAktive Objekte: " << A::nAktiv();
	}
	cout << "\nKontext verlassen";
	cout << "\nAktive Objekte: " << A::nAktiv();
	cout << endl;
}
