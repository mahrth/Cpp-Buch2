#include <iostream>
using namespace std;

void f() {}

template<typename T, typename... S>
void f(T kopf, S... ende) {
	cout << kopf << " ";
	f(ende...);
}

template<typename T>
T add(T kopf) {
	return kopf;
}

template<typename T, typename... S>
T add(T kopf, S... ende) {
	return kopf + add(ende...);
}


int main() {
	cout << add(1, 2, 3, 4) << endl;
	f(1,2,'a',"xyz");
}
