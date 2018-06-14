// 1. to store data into memory, computer need a place where it can keep it, that place is called 'Object', an object is a region of memory with
// a type that specifies what kind of information can be placed in it. A named object is called a variable.

#include "std_lib_facilities.h"
using namespace std;
int main() {
	cout<<"please enter your first name and age:\n";
	string firstName="???";
	double age=0;
	cin>>firstName>>age;
	cout<<"Hello, "<<firstName<<"!( aged "<<age*12<<" *in months )\n";
	return 0;
}

// 2. A statement that introduces a new name into the program and sets aside memory for a variable is called a 'definition'. A definition can
//    (and should) assign an initial value.
// 3. The named objects is called a variable and has a specific type which determines what kind of operations can be performed on it. The data
//    we put into variables are called values.
// 4. The input operation ">>"(get from) and output operation "<<"(put to) are sensitive to type.
