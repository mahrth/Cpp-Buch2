#include <iostream>     
#include <locale>
using namespace std;

int main() {
    double d = 123.456;
    cout << "Punkt: " << d << '\n';
    cout.imbue(locale(""));
    cout << "Komma: " << d << endl;
}
