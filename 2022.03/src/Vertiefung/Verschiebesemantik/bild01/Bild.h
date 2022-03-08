#pragma once
#include <iostream>
#include <string>

class Bild {
private:
	int b;
	int h;
	int* p;
	std::string name;
public:
	Bild(int breite, int hoehe, const std::string& name); 
	Bild(const Bild&);
	Bild(Bild&&);
	virtual ~Bild();
	Bild& operator=(const Bild&);
	Bild& operator=(Bild&&);
	void setzePixel(int x, int y, int farbwert);
	friend std::ostream& operator<<(std::ostream&, const Bild&);
};
