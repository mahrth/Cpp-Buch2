#include "Bild.h"
#include <cstring>
using namespace std;

Bild::Bild(int b, int h, const string& name) : b(b), h(h), name(name) {
	cout << "Bild(): \"" << name << "\"\n";
	p = new int[b*h];
	for(int i=0; i<b*h; i++) { 
		p[i]=0;
	}
}

Bild::~Bild() {
	cout << "~Bild(): \"" << name << "\"\n";
	if(p!=nullptr) { 
		delete[] p; 
	}
}

Bild::Bild(const Bild& r) : b(r.b), h(r.h), name("Kopie von " + r.name) {
	cout << "Bild(const Bild&): \"" << name << "\"\n";
	p = new int[b*h];
	memcpy(p,r.p,b*h*sizeof(int));
}

Bild::Bild(Bild&& r) : b(r.b), h(r.h), name("Verschiebung von " + r.name) {
	cout << "Bild(Bild&&): \"" << name << "\"\n";
	p = r.p;
	r.p = nullptr;
	r.b = 0;
	r.h = 0;
}

Bild& Bild::operator=(const Bild& r) {
	cout << "operator=(Bild&): \"" << r.name << "\" -> \"" << name << "\"\n";
	if(&r!=this) {
		if(p!=nullptr) {
			delete[] p;
		}
		b = r.b; 
		h = r.h;
		p = new int[b*h];
		memcpy(p,r.p,b*h*sizeof(int));	
	}
	return *this;
}

Bild& Bild::operator=(Bild&& r) {
	cout << "operator=(Bild&&) \"" << r.name << "\" -> \"" << name << "\"\n";
	if(&r!=this) {
		if(p!=nullptr) { delete[] p; }
		b = r.b; 
		h = r.h;
		p = r.p;
		r.p = nullptr;
		r.b = 0;
		r.h = 0;
	}
	return *this;
}

void Bild::setzePixel(int x, int y, int farbwert) {
	p[x+y*b] = farbwert;
}

ostream& operator<<(ostream& os, const Bild& r) {
	int i=0;
	os << "\"" << r.name << "\" = ";
	for(int y=0;y<r.h;y++) {
		os << "[ ";
		for(int x=0;x<r.b;x++) { 
			os << r.p[i++] << " "; 
		}
		os << "]";
	}
	return os;
}
