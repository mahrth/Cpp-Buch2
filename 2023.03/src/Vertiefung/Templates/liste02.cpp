#include <iostream>
#include <list>
using namespace std;

struct Liste : list<int> {
	int& operator[](int index) {
		list<int>::iterator it = begin();  
		for (int i=0; i<index; i++) { 
			it++; 
		}
		return *it;
	}
};

int main() {
	Liste liste;
	liste.push_back(1);
	liste.push_back(2);
	liste[1] = 3;
	cout << liste[0] << "\n";
	cout << liste[1] << "\n";
}
