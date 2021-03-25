#include <complex>
#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

struct A {};

int main() {
	cout << boolalpha;
	cout << "void: " << is_literal_type<void>();
	cout << "\nbool: " << is_literal_type<bool>();
	cout << "\nchar: " << is_literal_type<char>();
	cout << "\nconst int: " << is_literal_type<const int>();
	cout << "\nlong: " << is_literal_type<long>();
	cout << "\nconst short*: " << is_literal_type<const short*>();
	cout << "\nchar**: " << is_literal_type<char**>();
	cout << "\nfloat&: " << is_literal_type<float&>();
	cout << "\nint[]: " << is_literal_type<int[]>();
	cout << "\nchar[2][3]: " << is_literal_type<char[2][3]>();
	cout << "\nbool*[]: " << is_literal_type<bool*[]>();
	cout << "\nstring: " << is_literal_type<string>();
	cout << "\nstring*: " << is_literal_type<string*>();
	cout << "\nstring&: " << is_literal_type<string&>();
	cout << "\nstring[]: " << is_literal_type<string[]>();
	cout << "\ncomplex: " << is_literal_type<complex<int>>();
	cout << "\ncomplex&: " << is_literal_type<complex<int>&>();
	cout << "\ncomplex[]: " << is_literal_type<complex<int>[]>();
	cout << endl;
}
