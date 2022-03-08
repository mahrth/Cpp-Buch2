#include <iostream>

struct A 
{
	void funktion() 
	{ 
		std::cout << "A::funktion()\n"; 
	}
};

struct B : A 
{
	virtual void funktion() override  
	{ 
		std::cout << "B::funktion()\n"; 
	}
};

int main()
{
	A a;
	a.funktion();
	B b;
	b.funktion();
}

