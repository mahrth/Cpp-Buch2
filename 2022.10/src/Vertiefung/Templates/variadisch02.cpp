#include <iostream>
#include <utility>
using namespace std;

void f() {}

template<typename T, typename... S>
void f(T kopf, S... ende) {
	cout << kopf << " ";
	f(ende...);
}

template<typename T, T... werte>
void anzeigen(integer_sequence<T, werte...> s) {
    cout << "Anzahl=" << s.size() << ": ";
    //((cout << werte << ' '),...);
    f(werte...);
    cout << endl;
}

int main() {
	integer_sequence<int,2,4,6,8> s1;
	anzeigen(s1);
	make_integer_sequence<long, 10> s2;
	anzeigen(s2);
    anzeigen(make_integer_sequence<long, 5>{});
	anzeigen(make_index_sequence<10>{});
}
