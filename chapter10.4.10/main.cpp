
#include <iostream>
using namespace std;

class CA
{
public:
	CA() { construct(); }
	CA(int v) : val(v) { construct(); }
	~CA() { cout << "~CA" << idx <<  " val: " << val << endl; }
	void construct() { idx=cnt++; cout << "CA" << idx << " val: " << val << endl; }
	CA operator+(const CA&rhs) { return CA(val+rhs.val); }
	CA operator-(const CA&rhs) { return CA(val-rhs.val); }
	CA operator*(const CA&rhs) { return CA(val*rhs.val); }
	CA operator/(const CA&rhs) { return CA(val/rhs.val); }
	const CA& operator=(const CA&rhs) { if (this != &rhs) val = rhs.val; return *this; }
	int val;
	int idx;
	static int cnt;
};
int CA::cnt = 0;

int main()
{
	CA a(0), b(1), c(2), d(3), e(4);
	a = b + c * d / e;
	CA f(100), g(101);

	return 0;
}
