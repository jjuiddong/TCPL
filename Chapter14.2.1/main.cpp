#include <iostream>
using namespace std;
class mathErr {
	public: virtual void debug_print() const { cerr << "math error\n"; }
};
class overFlow : public mathErr {
	public:
		overFlow(int n) : m_n(n) {}
		virtual void debug_print() const { cerr << "overFlow error " << m_n << endl; }
		int m_n;		
};
class zeroDivide : public mathErr {
public:
	zeroDivide(int n, char c) : m_n(n), m_c(c) {}
	virtual void debug_print() const { cerr << "zeroDivide error " << m_n << " " << m_c << endl; }
	int m_n; char m_c;
};
void func() {
	throw zeroDivide(123, 'z');
}
void main()
{
	try {
		func();
	}
	catch(overFlow &e) {
		e.debug_print();	
	}
	catch(mathErr &e) {
		e.debug_print();
	}
}