namespace A::B::C {
	struct Y {};
}

namespace A::B {
	struct X {};
}

int main() {
	using namespace A::B::C;
	Y y;
	A::B::X x;
}
