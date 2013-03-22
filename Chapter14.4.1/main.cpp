#include <iostream>
using namespace std;

class E {};
class Y {
	int *p;
	void init() {
		throw E();
	}
public:
	Y(int s) { 
		cout << "Y()\n";
		p = new int[s]; 
		init();
	}
	~Y() { 
		delete []p; 
		cout << "~Y()\n";
	}
};

void main()
{
	try {
		Y y(10);
	}
	catch (...)
	{
		cout << "main catch\n";
	}
}
