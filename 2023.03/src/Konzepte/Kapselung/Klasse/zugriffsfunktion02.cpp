class A {
private:
	int wert; 
public:
	void setWert(int w) { 
		wert = w; 
	}
	int getWert() const { 
		return wert; 
	}
};

int main() {
	A a;
	a.setWert(1);
	int w = a.getWert();
}
