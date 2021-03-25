#include <initializer_list>
using namespace std;

class Vektor {
private:
	int* werte;
	unsigned int laenge, schreibPosition;
public:	
	Vektor(initializer_list<int> liste) : laenge(liste.size()), schreibPosition(0) {
		werte = new int[laenge];
		for(auto e : liste) {
			werte[schreibPosition++] = e; 
		};
	}
	Vektor(const Vektor&) = delete;
	virtual ~Vektor() { delete[] werte; }
};

int main() {
	Vektor a{10,20,30};
	Vektor b{40,50,60};
	b = a;
} 
