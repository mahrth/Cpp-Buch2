#include <iostream>
#include <string>
using namespace std;

struct A {};
string f(A& a) { return "L-Wert-Referenz\n"; }
string f(const A& a) { return "Konstante L-Wert-Referenz\n"; }
string f(A&& a) { return "R-Wert-Referenz\n"; }
string f(const A&& a) { return "Konstante R-Wert-Referenz\n"; }

int main() {
  A a;
  const A c;
  cout << "L-Wert            -> " << f(a);
  cout << "Konstanter L-Wert -> " << f(c);
  cout << "R-Wert            -> " << f(move(a));
  cout << "Konstanter R-Wert -> " << f(move(c));
}
