#include "std_lib_facilities.h"
using namespace std;

const string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
const string ex_bad_input_msg = "You entered something that's not an integer!";
const string ex_sum_overflow_msg = "The sum cannot be represented with an int type!";

int main() {
	cout<<"Enter the value of n\n";
	int n{0}, sum{0};
	cin>>n;
	if (!cin) throw runtime_error(ex_bad_input_msg);
    if (n < 1) throw runtime_error(ex_bad_number_msg);
	vector<int> vals;
	cout<<"Enter as many numbers you want (press '|' to stop)\n";
	int val{-1};
	for (; cin>>val;) {
		vals.push_back(val);
		if (vals.size()<=n) {
			sum += val;
			if (val>= 0 && sum + val < sum) throw runtime_error(ex_sum_overflow_msg);
        	if (val < 0 && sum + val > sum) throw runtime_error(ex_sum_overflow_msg);
		}
	}
	cout<<" | "<<val<<'\n';
	if ( val == '0') {
		error("either your entered value exceeds int limits or you entered something invalid");
	}
	if (vals.size()<n) error("you entered far less values");
	cout<<"The sum of first "<<n<<" numbers ( ";
	for (int i{0}; i<n; i++) {
		cout<<vals[i];
		if (i<n-1) {
			cout<<", ";
		}
	}
	cout<<" ) is "<<sum<<'\n';
	return 0;
}