#include <iostream>
#include "fileptr.h"
using namespace std;
class X {
	Lock_ptr bb;
	File_ptr aa;
public:
	X(const char *x, const char *y) :
	  aa(x, "r"),
	  bb(y)
	{		
	}
};

void main()
{
	try {
		X x("tes.txt", "r" );
	}
	catch (...) {
		cout << "main catch\n";
	}
}
