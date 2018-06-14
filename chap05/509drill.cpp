#include "std_lib_facilities.h"
using namespace std;

int main () {
	try {
		cin<<"Success!\n";
		return 0;
	}
	catch (exception& e) {
		cerr<<"error for samar: "<<e.what()<<'\n';
		return 1;
	}
	catch (...) {
		cerr<<"Oops samar: unknown exception!\n";
		return 2;
	}
}