#include "std_lib_facilities.h"
using namespace std;

const string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
const string ex_bad_input_msg = "You entered something that's not an integer!";
const string ex_sum_overflow_msg = "The sum cannot be represented with an int type!";

int main() {
	cout<<"Enter the value of n\n";
	double n{0}, sum{0};
	cin>>n;
	if (!cin) throw runtime_error(ex_bad_input_msg);
    if (n < 1) throw runtime_error(ex_bad_number_msg);
	vector<double> vals;
	vector<double> diffs;
	double diff{0.0};
	cout<<"Enter as many numbers you want (press '|' to stop)\n";
	double val{0.0};
	for (; cin>>val;) {
		vals.push_back(val);
		
		if (vals.size()>2) {
			diff = vals[vals.size()-1] - vals[vals.size()-2];
			diffs.push_back(diff);
		}
		
		if (vals.size()<=n) {
			sum += val;
			if (val>= 0 && sum + val < sum) throw runtime_error(ex_sum_overflow_msg);
        	if (val < 0 && sum + val > sum) throw runtime_error(ex_sum_overflow_msg);
		}
	}
	// if ( val != '|') {
	// 	error("either your entered value exceeds int limits or you entered something invalid");
	// }
	if (vals.size()<n) error("you entered far less values");
	cout<<"The sum of first "<<n<<" numbers ( ";
	for (int i{0}; i<n; i++) {
		cout<<vals[i];
		if (i<n-1) {
			cout<<", ";
		}
	}
	cout<<" ) is "<<sum<<'\n';
	cout<<"vector of diffs is \n";
	for (int i{0}; i<n-1; i++) {
		cout<<diffs[i];
		if (i<n-2) {
			cout<<", ";
		}
	}
	cout<<'\n';
	return 0;
}