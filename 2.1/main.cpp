
#include <iostream>
#include <string>
#include <fstream>

using namespace  std;
int main()
{
	ifstream fs("test.txt");

	string str;
	getline(fs, str);

	cout << str;

	return 0;
}
