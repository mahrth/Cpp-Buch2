#pragma once
#include <vector>
#include <iostream>

struct A {
	std::vector<int> v;
	A(const std::initializer_list<int>& l) : v(l) {}
	A(const A&);
	//A(A&&);
	A& operator=(const A&);
	//A& operator=(A&&);
	static void tauschePerKopie(A&, A&); 
	static void tauschePerVerschiebung(A&, A&); 
};

std::ostream& operator<<(std::ostream&, const A&);
