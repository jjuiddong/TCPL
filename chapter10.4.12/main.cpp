
#include <iostream>
using namespace std;

class CA
{
public:
	CA() { idx=cnt++; cout << "CA" << idx << endl; }
	~CA() { cout << "~CA" << idx << endl; }
	int idx;
	static int cnt;
};
int CA::cnt = 0;

struct STest
{
	union 
	{
		//CA a;
		char buf[32];
	};
};

int main()
{
	//STest test;
	return 0;
}
