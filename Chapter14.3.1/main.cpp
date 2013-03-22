#include <iostream>
using namespace std;
class H {
public: virtual void debug_print() const { cerr << "H exception\n"; }
};

class E : public H {
public: virtual void debug_print() const { cerr << "E exception\n"; }
};

void func() {
	throw new E();
}
void main()
{
	try {
		func();
	}
	catch(H *e) {
		e->debug_print();	
	}
}
