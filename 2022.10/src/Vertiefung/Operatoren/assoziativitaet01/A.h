#pragma once
#include <string>

struct A {
	const std::string name;
	explicit A(std::string name) : name(name) {}
	const A& operator+(const A& a) const; 
	const A& operator+=(const A& a) const; 
};
const A& operator-(const A& a1, const A& a2); 
const A& operator-=(const A& a1, const A& a2); 
