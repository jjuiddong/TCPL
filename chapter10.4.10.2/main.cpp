
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("aa"), s2("bb");
	const char *cs = (s1 + s2).c_str();
	cout << cs << endl;

	string &s3 = string("aa") + string("bb");
	s3 = "ccc";
	cout << s3 << endl;

	return 0;
}
