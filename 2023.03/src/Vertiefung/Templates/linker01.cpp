template <typename T> T g(const T& x);

int main() {
	g(2);
}

template <typename T> T g(const T& x) { 
	return x*x; 
}
