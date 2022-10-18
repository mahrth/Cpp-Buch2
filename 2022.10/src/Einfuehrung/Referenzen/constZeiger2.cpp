int main() {
	int i=1;
	
	const int* z1 = &i; 
	int const* z2 = &i; 

	int* const z3 = &i; 

	const int* const z4 = &i; 
	int const* const z5 = &i; 
	
	int const* const * z6 = &z5; 
	int const* const * * const z7 = &z6; 
}
