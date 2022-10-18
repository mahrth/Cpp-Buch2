#include <iostream>
#include <functional>
using namespace std;

class Schalter {
private:
	using Aktion = function<void(void)>;
	const Aktion aktion;
public:
	Schalter(Aktion a) : aktion(a) {} 
	void betaetigen() const {
		cout << "Schalter betätigt\n"; 
		aktion();
	}
};

int main() {
	Schalter s1([] { cout << "Auf Ereignis reagieren\n"; });
	Schalter s2([] { cout << "Auf Ereignis anders reagieren\n"; });
	s1.betaetigen();
	s2.betaetigen();
}
