
#pragma once

#include <iostream>
#include <string>
using namespace std;

class CA
{
public:
	CA(const string&_s):s(_s) { idx=cnt++; cout << "CA" << idx << s << endl; }
	~CA() { cout << "~CA" << idx << s << endl; }
	int idx;
	static int cnt;
	string s;
};

