#include <iostream>
#include <memory>
using namespace std;
class E {};
class A {
public:
	A() { m_idx = ++g_cnt; cout << "A() " << m_idx << endl; }
	~A() { cout << "~A() " << m_idx << endl; }
	int m_idx;
	static int g_cnt;
};
int A::g_cnt = 0;
void func()
{
	auto_ptr<A> p1(new A());
	auto_ptr<A> p2(new A());
	auto_ptr<A> p3(p1);
	A *pa = new A();
	auto_ptr<A> p4(pa);
	auto_ptr<A> p5(pa);	
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
