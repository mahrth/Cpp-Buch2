#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Vektor {
private:
	vector<int> daten;
public:
	Vektor(const initializer_list<int>& l) : daten(l) {
		cout << "Vektor(initializer_list<int>)\n";
	}
	string text() const;
};

int main() {
	Vektor a{10,20,30};
	cout << "a = " << a.text() << endl;
}

string Vektor::text() const {
	stringstream s;
	s << "( ";
	for(const auto d : daten) {
		s << d << " ";
	}
	s << ")";
	return s.str();
}
