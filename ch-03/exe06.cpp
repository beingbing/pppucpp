#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter 3 numbers\n";
	int val1=0, val2=0, val3=0;
	cin>>val1>>val2>>val3;
	if (val1 > val2) {
		if (val2 >= val3) {
			cout<<val3<<", "<<val2<<", "<<val1<<"\n";
		} else if (val2 < val3) {
			if (val1 >= val3) {
				cout<<val2<<", "<<val3<<", "<<val1<<"\n";
			} else {
				cout<<val2<<", "<<val1<<", "<<val3<<"\n";
			}
		}
	} else if (val1 < val2) {
		if (val1 >= val3) {
			cout<<val3<<", "<<val1<<", "<<val2<<"\n";
		} else if (val1 < val3) {
			if (val2 >= val3) {
				cout<<val1<<", "<<val3<<", "<<val2<<"\n";
			} else {
				cout<<val1<<", "<<val2<<", "<<val3<<"\n";
			}
		}
	} else {
		if (val1 >= val3) {
			cout<<val3<<", "<<val1<<", "<<val2<<"\n";
		} else {
			cout<<val2<<", "<<val1<<", "<<val3<<"\n";
		}
	}
	return 0;
}