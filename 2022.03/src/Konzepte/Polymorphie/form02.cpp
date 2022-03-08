#include <iostream>
#include <string>
using namespace std;

#define COUT(x) (cout << #x " = " << (x) << '\n')

struct Form {
	int x,y;
	Form() : x(0), y(0) {}
	virtual string text() const { return "Form"; } 	
};

struct Rechteck : Form {
	int b, h;
	Rechteck() : Form(), b(0), h(0) { }
	virtual string text() const { return "Rechteck"; } 	
};

int main() {
	Form f;
	Rechteck r; 
	COUT(sizeof(int)); 
	COUT(sizeof(Form));	
	COUT(sizeof(Rechteck)); 
	COUT(sizeof(void*)); 
	COUT(&f); 
	COUT(&f.x); 
	COUT(&r); 
	COUT(&r.x); 
}	 

