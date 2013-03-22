#pragma once
class E {};
class File_ptr {
	FILE *p;
public:
	File_ptr(const char* n, const char* a) { 
		std::cout << "File_ptr()\n";
		p = fopen(n,a); 
		if (!p) throw E();
	}
	File_ptr(FILE *pp) { p = pp; }
	~File_ptr() { 
		if(p) fclose(p); 
		std::cout << "~File_ptr()\n";
	}
	operator FILE*() { return p;}
};

class Lock_ptr {
public:
	Lock_ptr(const char* n) {
		std::cout << "Lock_ptr()\n";
	}
	~Lock_ptr() {
		std::cout << "~Lock_ptr()\n";
	}
};
