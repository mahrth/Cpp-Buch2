#include <iostream>
#include <functional>
#include <vector>
using namespace std;

class Schalter {
public:
    using Aktion = function<void(const Schalter&)>;
private:
    vector<Aktion> aktionen;
    const string _name;
    int _zaehler = 0;
public:
	Schalter(const string& name) : _name(name) {}
    void hinzufuegen(const Aktion& a) { aktionen.push_back(a); } 
    void betaetigen() {
		_zaehler++;
		cout << "Schalter " << _name << " betätigt\n"; 
		for (auto& a : aktionen) { a(*this); }
	}
	string name() const { return _name; }
	int zaehler() const { return _zaehler; }
};

int main() {
    Schalter s1("S1"), s2("S2");
    const Schalter::Aktion aktion1 = [](const Schalter&){ cout << "Aktion 1\n"; };
    const Schalter::Aktion aktion2 = [](const Schalter& s) { cout << "Aktion 2: Schalter " << s.name() << " wurde " << s.zaehler() << " mal betätigt.\n"; };
    const Schalter::Aktion aktion3 = [](const Schalter& s) { cout << "Aktion 3: " << s.zaehler() << " mal Schalter " << s.name() << " betätigt.\n"; };
    s1.hinzufuegen(aktion1);
    s1.hinzufuegen(aktion2);
    s2.hinzufuegen(aktion3);
    s1.betaetigen();
    s2.betaetigen();
    s2.betaetigen();
}
