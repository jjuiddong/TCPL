
#include <iostream>
#include <string>
using namespace std;

struct Data
{
	int a;
	char b;
	float c;
};

int main()
{
// 	char p1[20] = "hello world";
// 	char *p2 = new char[ 10];
// 	char *p3 = new (p1) char[ 10];
// 	delete[] p2;

	Data *p2 = new Data[10];

	return 0;
}
