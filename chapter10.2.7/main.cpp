
#include <iostream>
using namespace std;

class CA
{
public:
	mutable int idx;
};

class CB
{
public:
	int idx;
};

int main()
{
	const static CA a;
	*(int*)&a.idx = 10;
	cout << a.idx << endl;

	const static CB b;
	*(int*)&b.idx = 10;
	cout << b.idx << endl;
}
