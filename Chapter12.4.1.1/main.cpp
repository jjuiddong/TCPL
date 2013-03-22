
#include <iostream>

class BBwindow {};
class CWindow {};
class IBwindow {};
class LSwindow {};
class Ival_box : public BBwindow, public CWindow, public IBwindow, public LSwindow {};
class Ival_slider : public Ival_box {};
class Ival_dial : public Ival_box {};
class Flashing_ival_slider : public Ival_slider {};
class Popu_ival_slider : public Ival_slider {};

int main()
{

	return 0;
}
