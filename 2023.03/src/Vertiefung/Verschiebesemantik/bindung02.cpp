#include <iostream>
#include <string>
using namespace std;

struct A {};
string f(A& a) { return "L-Wert-Referenz"; }
string f(const A& a) { return "Konstante L-Wert-Referenz"; }
//string f(A&& a) { return "R-Wert-Referenz"; }
//string f(const A&& a) { return "Konstante R-Wert-Referenz"; }

int main() {
  A a;
  const A c;
  cout << "L-Wert            -> " << f(a);
  cout << "\nKonstanter L-Wert -> " << f(c);
  cout << "\nR-Wert            -> " << f(move(a));
  cout << "\nKonstanter R-Wert -> " << f(move(c));
}
