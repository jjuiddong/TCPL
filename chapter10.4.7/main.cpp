
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
	CA a[10];
	return 0;
}
