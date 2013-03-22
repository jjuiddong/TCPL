#include <iostream>
using namespace std;

class CA {
public:
	virtual ~CA() {}
	virtual CA& operator=(const CA& rhs) { cout << "CA::=\n"; return *this; }
};

class CB : public CA {
public:
	virtual CB& operator=(const CB& rhs) { cout << "CB::=\n"; return *this; }
};

class CC : public CB {
public:
	virtual CC& operator=(const CC& rhs) { cout << "CC::=\n"; return *this; }
};
CA& assign( CA& a, CA& b)
{
	a = b;
	return a;
}
int main()
{
	CA a; CB b; CC c;
	a = b;
	b = c;
	//b = a; error
	//c = a; error
	CA *pa = new CA(); CA *pb = new CB(); CA *pc = new CC();
	*pa = *pb;
	*pb = *pa;
	assign(*pb, *pc);

	return 0;
}
