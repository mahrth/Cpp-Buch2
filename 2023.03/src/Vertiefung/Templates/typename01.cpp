template <typename T>
struct A { 
	struct B {}; 
	void f() { B b;	}
};

template <typename T>
void g() {
	//B b1;
	//A<T>::B b2;
	typename A<T>::B b3;
	A<int>::B b4;
	A<T> a;
}

int main() { g<int>(); }
