#include <iostream>
#include <exception>
using namespace std;
class E {};
void func() {
	throw E();
}
class X {
public:
	X() { cout << "X()\n"; }
	~X() { 
		cout << "~X()\n"; 
		if (uncaught_exception()) cout << "call destructor by exception\n";
		else cout << "call normal destructor \n";
	}
};
class Y {
public:
	Y() { cout << "Y()\n"; }
	~Y() { cout << "~Y()\n"; func(); }
};

void main()
{
	try {
		Y b;
		X a;
		func();
	}
	catch (E &)
	{
		cout << "catch " << endl;
	}
}
