
#include <iostream>
using namespace  std;

class CA
{
public:
	CA() { idx=cnt++; cout << "CA" << idx << endl; }
	~CA() { cout << "~CA" << idx << endl; }
	int idx;
	static int cnt;
};
int CA::cnt = 0;

int main()
{
	static CA a;
	for (int i=0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5)
		{
			static CA b;
		}
	}
}
