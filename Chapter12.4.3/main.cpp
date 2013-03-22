
#include <iostream>

class Ival_box {};
class Ival_slider : public Ival_box {};

class BBwindow {};
class CWwindow {};
class BBslider : public BBwindow {};
class CWslider : public CWwindow {};

class BB_ival_slider : public BBslider, public Ival_slider {};
class CW_ival_slider : public CWslider, public Ival_slider {};

int main()
{

	return 0;
}
