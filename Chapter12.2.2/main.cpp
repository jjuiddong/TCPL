
#include <iostream>
using namespace std;

class CA {
public:
	CA() { idx=cnt++; cout << "CA" << idx << endl; }
	virtual ~CA() { cout << "~CA" << idx << endl; }
	int idx;
	static int cnt;
};
int CA::cnt = 0;

class CB : public CA {
public:
	CB() { idx=cnt++; cout << "CB" << idx << endl; }
	virtual ~CB() { cout << "~CB" << idx << endl; }
	int idx;
	static int cnt;
};
int CB::cnt = 0;

class CC : public CB {
public:
	CC() { idx=cnt++; cout << "CC" << idx << endl; }
	virtual ~CC() { cout << "~CC" << idx << endl; }
	int idx;
	static int cnt;
};
int CC::cnt = 0;

int main()
{
	CC c;
	return 0;
}
