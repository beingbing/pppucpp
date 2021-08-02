#include "std_lib_facilities.h"
using namespace std;

const string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
const string ex_bad_input_msg = "You entered something that's not an integer!";

int v1 = 1;
int v2 = 1;

int fib() {
	int s = v1+v2;
	if (s<=0) s=1;
	v1 = v2;
	v2 = s;
	return s;
}

int main() {
	int val{0}, n{0};
	cout<<"Enter the number of values you want to print\n";
	cin>>n;
	if (!cin) throw runtime_error(ex_bad_input_msg);
    if (n < 1) throw runtime_error(ex_bad_number_msg);
	cout<<v1<<" "<<v2<<" ";
	for (int i{0}; i<n-2; i++) {
		val = fib();
		cout<<val<<" ";
	}
	return 0;
}