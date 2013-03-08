
#include <iostream>
#include <string>
using namespace  std;

class CB
{
public:
	CB(string st) : m_str(st) {}
	string m_str;
};
class CA
{
public:
	const int cdata;
	float &fdata;
	CB b;
	CA(float &f) : cdata(100) , fdata(f), b("aa") { }
};

int main()
{
	float ff = .1f;
	CA a(ff);
	return 0;
}
