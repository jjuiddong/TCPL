#include <iostream>
using namespace std;
class E {
	public: virtual void debug_print() const { cerr << "E exception\n"; }
};
class DE : public E {
public: virtual void debug_print() const { cerr << "DE exception\n"; }
};
void f() {
	throw DE();
}
void g() {
	try {
		f();
	} 
	catch (E e)
	{
		cout << "g() catch "  << &e << " ";
		e.debug_print();
		throw;
	}
}
void main()
{
	try {
		g();
	}
	catch(E &e) {
		cout << "main catch " << &e << " ";
		e.debug_print();	
	}
}
