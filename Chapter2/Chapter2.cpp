
#include <iostream>
using namespace  std;

class CStack
{
public:
	CStack(int n) : m_n(n)
	{
	}

	class Exception{ 
		public: virtual char* what()=0; 
	};
	class Underflow : public Exception {
		public: virtual char* what() { return "Underflow"; }
	};
	class Overflow : public Exception {
		public: virtual char* what() { return "Overflow"; }
	};

	int m_n;
	void push( int n)
	{
		throw Overflow();		
	}
	void pop()
	{
	}
};



int main(int argc, char* argv[])
{
	CStack stack(10);

	try
	{
		stack.push(1);
	}
//	catch (CStack::Exception &e)
	catch (CStack::Underflow &e)
	{
		cout << e.what() << endl;
	}
	catch (CStack::Overflow &e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

