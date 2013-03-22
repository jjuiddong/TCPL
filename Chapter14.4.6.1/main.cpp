#include <iostream>
using namespace std;
class E {};
int Init() {
	return 0;
}
int Init2() {
	throw E();
	return 0;
}

class X {
public:
	X()  try : m_n(Init()), m_n2(Init2())
	{		
	}
	catch (E &)
	{
		cout << "catch E\n";
		return;
	}

	int m_n;
	int m_n2;
};

void main()
{
	X x;
}
