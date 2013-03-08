
#include <iostream>
using namespace  std;
class CB {
	public: CB() { cout << "CB" << endl; }
			~CB() { cout << "~CB" << endl; }
};
class CD {
	public: CD() { cout << "CD" << endl; }
			~CD() { cout << "~CD" << endl; }
};
class CE {
	public: CE() { cout << "CE" << endl; }
			~CE() { cout << "~CE" << endl; }
};
class CA
{
public:
	CD d;
	CE e;
	CB b;
	CA() : b(), d(), e() 
	{
	}
};

int main()
{
	CA a;
	return 0;
}
