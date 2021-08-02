// answer to drill #6

#include "std_lib_facilities.h"
using namespace std;

int main () {
	for (double val1=0, val2=0; cin>>val1>>val2;) {
		if (val1 > val2) {
			cout<<"The smaller value is: "<<val2<<"\n";
			cout<<"The larger value is: "<<val1<<"\n";
		} else if (val1 < val2) {
			cout<<"The smaller value is: "<<val1<<"\n";
			cout<<"The larger value is: "<<val2<<"\n";
		} else {
			cout<<"The numbers are equal\n";
		}
		if (-0.01<=(val1-val2) && (val1-val2)<=0.01) {
			cout<<"the numbers are almost equal\n";
		}
	}
	return 0;
}