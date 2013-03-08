
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

int main()
{
	CA *p = new CA();
	delete p;

	char buf[100];
	CA *p2 = new (buf) CA();
	cout << (void*)p2 << endl;
	cout << (void*)buf << endl;
	p2->~CA();
	return 0;
}
