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
	delete a; 	
	const int N=2;
	A** b = new A*[N]; 	
	for(int i=0; i<N; i++){
		b[i] = new A("b"+to_string(i)); 
	}	
	for(int i=0; i<N; i++){
		delete b[i]; 
	}
	delete[] b; 
} 
