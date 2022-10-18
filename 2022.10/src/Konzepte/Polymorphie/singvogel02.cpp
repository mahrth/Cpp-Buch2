#include <iostream>
#include <string>
using namespace std;

struct Singvogel {	
	virtual string singen() const { return "?\n"; }	
};
struct Nachtigall : Singvogel {
	string singen() const {	
		return "Gesang der Nachtigall\n";
	}	
};
struct Blaumeise : Singvogel {
	string singen() const {	
		return "Gesang der Blaumeise\n";
	}	
};
void f(const Singvogel& singvogel) {	
	cout << "Der Singvogel singt: " << singvogel.singen();
}
int main() {
	Nachtigall nachtigall;
	f(nachtigall);	
}
