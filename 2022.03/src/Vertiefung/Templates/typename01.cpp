template <typename T>
struct A { struct B {}; };

template <typename T>
void g() {
	//A<T>::B* b1;
	typename A<T>::B* b2;
	A<int>::B* b3;
	A<T>* a;
}

int main() {
	g<int>();
}
