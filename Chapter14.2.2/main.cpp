#include <iostream>
using namespace std;
class Network_err {
	public: virtual void debug_print() const { cerr << "Network_err exception\n"; }
};
class FileSystem_err {
public:
	virtual void debug_print() const { cerr << "FileSystem_err exception " << endl; }
};
class Netfile_err : public Network_err, public FileSystem_err {
public:
		virtual void debug_print() const { cerr << "Netfile_err exception" << endl; }
};
void func() {
	throw FileSystem_err();
}
void func2() {
	throw Netfile_err();
}
void main()
{
	try {
		func2();
	}
	catch(FileSystem_err &e) {
		e.debug_print();	
	}
}
