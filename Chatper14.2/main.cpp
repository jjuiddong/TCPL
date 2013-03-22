#include <iostream>
using namespace std;
class mathErr {};
class overFlow : public mathErr {};
class zeroDivide : public mathErr {};

void func()
{
	throw zeroDivide();
}

void main()
{
	try
	{
		func();
	}
	catch(overFlow &)
	{
		cout << "overFlow\n";
	}
	catch(mathErr &)
	{
		cout << "mathErr\n";
	}
}
