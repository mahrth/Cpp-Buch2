#include <iostream>
#include <list>
using namespace std;

template <typename T> 
struct Liste : list<T> {
	T& operator[](unsigned int index) {
		typename list<T>::iterator it = list<T>::begin();
		for(unsigned int i=0; i<index; i++) { 
			it++; 
		}
		return *it;
	}
};

int main() {
	Liste<double> liste;
	liste.push_back(1.1);
	liste.push_back(2.2);
	liste[1] = 3.3;
	cout << liste[0] << "\n";
	cout << liste[1] << "\n";
}
