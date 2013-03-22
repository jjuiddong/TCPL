#include <iostream>
using namespace std;

class E {};
class A {
public:
	A() { cout << "A()\n"; }
	~A() { cout << "~A()\n"; }
};
class B {
public:
	B() { cout << "B()\n"; }
	~B() { cout << "~B()\n"; }
};
void func()
{
	throw E();
}

void main()
{
	try {
		A a;
		func();
		B b;
	}
	catch (...)
	{
		cout << "main catch\n";
	}
}
