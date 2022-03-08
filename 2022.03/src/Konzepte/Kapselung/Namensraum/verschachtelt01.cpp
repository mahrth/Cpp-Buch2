namespace A {
	namespace B {
		struct X {};
		namespace C {
			struct Y {};
		}
	}
}

int main() {
	using namespace A::B::C;
	Y y;
	A::B::X x;
}
