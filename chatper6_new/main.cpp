
#include <iostream>
using namespace std;

void out_of_store()
{
	cerr << "operator new failed: out of store\n";
	throw bad_alloc();
}

int main()
{
	set_new_handler(out_of_store);
	for(;;) new char[10000];
	cout << "ok\n";

	return 1;
}
