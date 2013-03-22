#include <iostream>
#include <memory>
using namespace std;

class E {};
class A {
public:
	A() { cout << "A()\n"; }
	~A() { cout << "~A()\n"; }
};

void func()
{
	auto_ptr<A> p(new A());
	unique_ptr<A> pp(new A());
	throw E();
}

void main()
{
	try {
		func();
	}
	catch (...)
	{
		cout << "main catch\n";
	}
}
