#include "A.h"
#include <iostream>
using namespace std;

const A& A::operator+(const A& a) const { 
	cout << name << "+" << a.name << " ";
	return *this; 
}
const A& A::operator+=(const A& a) const { 
	cout << name << "+=" << a.name << " ";
	return *this; 
}
const A& operator-(const A& a1, const A& a2) { 
	cout << a1.name << "-" << a2.name << " ";
	return a1; 
}
const A& operator-=(const A& a1, const A& a2) { 
	cout << a1.name << "-=" << a2.name << " ";
	return a1; 
}
