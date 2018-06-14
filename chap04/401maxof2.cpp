#include "std_lib_facilities.h"
using namespace std;

int main () {
	int a=0,b=0;
	cout<<"Enter two integer numbers\n";
	cin>>a>>b;
	if (a > b) {
		cout<<"max("<<a<<", "<<b<<") is "<<a<<"\n";
	} else {
		cout<<"max("<<a<<", "<<b<<") is "<<b<<"\n";
	}
	return 0;
}