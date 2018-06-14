#include "std_lib_facilities.h"
using namespace std;

double some_function() {
	double d{0.0};
	cout<<"Enter a double\n";
	cin>>d;
	if (!cin) error("Couldn't read a double in some_function()\n");
	return d;
}

int main () {
	try {
		some_function();
		return 0;
	}
	catch (runtime_error& e) {
		cerr<<"runtime_error: "<<e.what()<<'\n';
		return 1;
	}
}