#include <iostream>
using namespace std;

int main()
{
   int i = 0;
   do
   {
      cout << "Ganzzahl eingeben (Ende mit 9999): ";
      cin >> i; 
      cout << "Eingabe war i = " << i << "\n";
   } while (i != 9999);
}
