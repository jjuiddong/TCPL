
#include <iostream>

class Ival_box {};
class Ival_slider : public Ival_box {};
class Ival_dial : public Ival_box {};
class ipopup : public Ival_slider {};
class iflash : public Ival_slider {};

class BBwindow {};
class CWwindow {};
class BBslider : public BBwindow {};
class CWslider : public CWwindow {};

class BBislider : public BBslider, public  Ival_slider {};
class CWislider : public CWslider, public Ival_slider {};

class BBipop : public BBslider, public ipopup {};
class CWipop : public CWslider, public ipopup {};

class CWifl : public CWslider, public iflash {};
class BBifl : public BBslider, public iflash {};


int main()
{

	return 0;
}
