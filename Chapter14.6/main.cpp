#include <iostream>
using namespace std;
class E {};
class F {};
class G {};
void func() throw()
{
	throw G();
}

void main()
{
	try {
		func();
	}
	catch (...) {
		cout << "catch\n";
	}
}
