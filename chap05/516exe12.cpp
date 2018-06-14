#include "std_lib_facilities.h"
using namespace std;

const string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
const string ex_bad_input_msg = "You entered something that's not an integer!";

int generateRandNo() {
	return rand()%10;
}

vector<int> randSeries(int n) {
	int r{0};
	vector<int> rands;
	bool repeat = false;

	for (int i{0}; rands.size()<n; i++) {

		r = generateRandNo();
		repeat = false;

		if (rands.size() == 0) {
			rands.push_back(r);
		}
		// rands.push_back(r);

		for(int j{0}; j<rands.size(); j++) {
			if (r == rands[j]) {
				repeat = true;
			}
		}

		if (!repeat) {
			repeat = false;
			rands.push_back(r);
		}
	}

	return rands;
}

int main() {
	srand(time(0));
	vector<int> rands;
	int n{0};
	cout<<"Enter the size of numberical string\n";
	cin>>n;
	if (!cin) throw runtime_error(ex_bad_input_msg);
    if (n < 1) throw runtime_error(ex_bad_number_msg);

	rands = randSeries(n);

	for (int i{0}; i<rands.size(); i++) {
		cout<<rands[i];
	}
	cout<<"\n";
	return 0;
}