#include <iostream>
using namespace std;
class E {};
void func()
{
	throw E();
}

class X
{
public:
	X() { cout << "X()\n"; }
	~X() { cout << "~X()\n"; }
	X(X&x) { cout << "X(X&)\n"; func(); }
	X& operator= (X &rhs) {
		cout << "X::operator=\n";
		func();
		return *this;
	}
};

void main()
{
	try {
		X a;
		//X b = a;
		X c;
		c = a;
	}
	catch (...)
	{
		cout << "catch " << endl;
	}
}
