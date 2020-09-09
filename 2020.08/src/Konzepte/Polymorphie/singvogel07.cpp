#include <iostream>
#include <string>
using namespace std;

struct Singvogel {	
	virtual string singen() const = 0;
	virtual ~Singvogel() = default;	
};

struct Nachtigall : Singvogel {
	string singen() const override {	
		return "Gesang der Nachtigall\n";
	}	
};

struct Blaumeise : Singvogel {
	string singen() const override {	
		return "Gesang der Blaumeise\n";
	}	
};

void benutzen1(const Singvogel& s) {
	cout << s.singen();
}

void benutzen2(const Nachtigall& n) {
	cout << n.singen();
}

int main() {
	Singvogel* singvogel1 = new Nachtigall;
	Nachtigall* singvogel2 = new Nachtigall;
	benutzen1(*singvogel1);
	benutzen2(*singvogel2);
	delete singvogel1;
	delete singvogel2;
}
