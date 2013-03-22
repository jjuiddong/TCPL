#include <iostream>
#include <memory>
using namespace std;
class E {};
class A {
public:
	int m_a[10];
	A() { idx = ++g_cnt; cout << "A() " << idx << "\n"; }
	~A() { cout << "~A() " << idx << "\n"; }
	void* operator new (size_t size) {
		cout << "A::new\n";
		return ::malloc(size);
	}
	void operator delete(void *p) {
		cout << "A::delete\n";
		free(p);
	}
	void* operator new (size_t size, void *t) {
		cout << "A::placement new\n";
		return t;
	}
	void operator delete(void *p, void *t) {
		cout << "A::placement delete\n";
	}
	int idx;
	static int g_cnt;
};
int A::g_cnt = 0;
void func()
{
	char buf[32];
	auto_ptr<A> p1(new (buf) A());
	auto_ptr<A> p2(new A());
	throw E();
}
void main()
{
	try {
		func();
	}
	catch (...) {
		cout << "main catch\n";
	}
}
