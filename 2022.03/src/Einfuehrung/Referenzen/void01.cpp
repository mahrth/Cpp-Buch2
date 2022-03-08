extern int* const z1;
extern int& r1;
extern void* const z2;
//extern void& r2;
int i=1;
int& r1 = i;
int* const z1 = &i;
void* const z2 = static_cast<void*>(z1);
void* z3 = (void*)z1;


