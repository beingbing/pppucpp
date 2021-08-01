#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter two numbers: \n";
	int val1 = 0, val2 = 0;
	cin>>val1>>val2;
	cout<<((val1>val2)?val2:val1)<<"\n";
	cout<<((val1>val2)?val1:val2)<<"\n";
	cout<<val2+val1<<"\n";
	cout<<val1-val2<<"\n";
	cout<<val1*val2<<"\n";
	cout<<val1/val2<<"\n";
	return 0;
}