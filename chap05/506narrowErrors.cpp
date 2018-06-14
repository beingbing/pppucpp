#include "std_lib_facilities.h"
using namespace std;

int main() {
	try {
		int x1 = narrow_cast<int>(2.9);
		int x2 = narrow_cast<int>(2.0);
		char c1 = narrow_cast<char>(1066);
		char c2 = narrow_cast<char>(85);
	}
	catch(exception &e){
		cerr<<"narrow exception thrown\n"<<e.what();
	}
	return 0;
}
