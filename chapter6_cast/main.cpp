#include <iostream>

class CA { };
class CB : public CA { };
class CC : public CA { };
class CD : public CC { };

int main()
{
	CD *p1 = new CD();
	CC *p2 = new CC();
	CB *c1 = static_cast<CB*>(p1);
	CB *c3 = reinterpret_cast<CB*>(p2);



	do
	{
		if ()
		{
			if ()
			{
				if()
				{
					break;

				}
			}

		}

		if ()
		{
			if ()
			{
				if()
				{

				}
			}

		}

		if ()
		{
			if ()
			{
				if()
				{

				}
			}

		}

	}
	while(false);

	~~~~






	return 0;
}
