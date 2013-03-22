
#include <iostream>
//#include "b.h"

class Temporary { };
class Employee { };
class Manager : public Employee {};
class Secretary : public  Employee {};
class Tsec : public Temporary, public Secretary {};
class Cosultant : public Temporary, public Manager {};

int main()
{

	return 0;
}
