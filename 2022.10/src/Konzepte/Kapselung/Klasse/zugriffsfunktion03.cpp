class A {
private:
	int _wert; 
public:
	void wert(int w) { 
		_wert = w; 
	}
	int wert() const { 
		return _wert; 
	}
};

int main() {
	A a;
	a.wert(1);
	int w = a.wert();
}
