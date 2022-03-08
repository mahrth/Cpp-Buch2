int wert = 1;
int& funcRef(){ return wert; }
int funcWert(){ return wert; }

int main(){
	int i = 1;
	const int c = 2;
	int& r = i;
	const int* const z = \&c;
	r = i+c;
	i = funcWert();
	i = funcRef();
	funcRef() = 3;
}


 
