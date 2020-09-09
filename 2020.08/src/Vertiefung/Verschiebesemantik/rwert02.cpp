#include <iostream>
using namespace std;

int wert = 1;
int& funcRef(){ return wert; }
int funcWert(){ return wert; }

int main(){
	int i = 1;
	const int c = 2;
	int& r = i;
	const int* const z = &c;
	r = i+c;
	i = funcWert();
	i = funcRef();
	cout << boolalpha;
	cout << "i: " << is_lvalue_reference_v<decltype((i))> << endl;
	cout << "1: " << is_lvalue_reference_v<decltype((1))> << endl;
	cout << "c: " << is_lvalue_reference_v<decltype((c))> << endl;
	cout << "r: " << is_lvalue_reference_v<decltype((r))> << endl;
	cout << "z: " << is_lvalue_reference_v<decltype((z))> << endl;
	cout << "&c: " << is_lvalue_reference_v<decltype((&c))> << endl;
	cout << "i+c: " << is_lvalue_reference_v<decltype((i+c))> << endl;
	cout << "funcWert(): " << is_lvalue_reference_v<decltype((funcWert()))> << endl;
	cout << "funcRef(): " << is_lvalue_reference_v<decltype((funcRef()))> << endl;
}


 
