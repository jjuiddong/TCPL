#include <iostream>
#include <memory>
using namespace std;
class E {};
class A {
public:
	int m_a[10];
	A() { cout << "A()\n"; }
	~A() { cout << "~A()\n"; }
	void* operator new (size_t size) {
		cout << "A::new\n";
		return ::malloc(size);
	}
	void operator delete(void *p) {
		cout << "A::delete\n";
		free(p);
	}
};
void func()
{
	auto_ptr<A> p(new A());
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
