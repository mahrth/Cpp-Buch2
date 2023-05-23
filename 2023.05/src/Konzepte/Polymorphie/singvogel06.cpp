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

int main() {
	//Singvogel singvogel;
	Singvogel* singvogel = new Nachtigall;
	cout << singvogel->singen();
	delete singvogel;
}
