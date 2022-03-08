#include <iostream>
using namespace std;

class A{
private:
	string _name;
public:	
	A(const string& name) : _name(name){ 
		cout << "A(const string&): " << _name << "\n";
	}	
	virtual ~A(){
		cout << "~A(): " << _name << "\n";
	}	
};

int main(){
	A* a = new A{"a"}; 
} 
