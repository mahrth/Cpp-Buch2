#include "A.h"
using namespace std;

A::A(const A& r) : v(r.v) { 
	cout << "A(const A& r): r=" << r << "\n"; 
}

//A::A(A&& r) : v(move(r.v)) {
//	cout << "A(A&& r): r=" << r << "\n";	
//}

A& A::operator=(const A& r) {
	v = r.v;
	cout << "operator=(const A& r): r=" << r << "\n";
	return *this;
}

//A& A::operator=(A&& r) {
//	v = move(r.v);
//	cout << "operator=(A&& r): r=" << r << "\n";
//	return *this;
//}

void A::tauschePerKopie(A& a, A& b) {
	cout << "Betrete tauschePerKopie\n";
	A tmp(a); 
	a = b; 
	b = tmp; 
	cout << "Verlasse tauschePerKopie\n";
}

void A::tauschePerVerschiebung(A& a, A& b) {
	cout << "Betrete tauschePerVerschiebung\n";
	A tmp(move(a)); 
	a = move(b); 
	b = move(tmp); 
	cout << "Verlasse tauschePerVerschiebung\n";
}

ostream& operator<<(ostream& os, const A& a) {
	os << "[ ";
	for(auto e : a.v) { os << e << " "; }
	os << "]";
	return os;
}

