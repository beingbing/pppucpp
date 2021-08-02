// answer to drill #1, #2, #3, #4 and #5

#include "std_lib_facilities.h"

constexpr double TOLERANCE = 1.0/100;

double min(double a, double b) {
	if (a<b)
		return a;
	return b;
}

double max(double a, double b) {
	if (a<b)
		return b;
	return a;
}

bool almost_equal(double a, double b) {
	if (abs(a-b) <= TOLERANCE)
		return true;
	return false;
}

int main () {
	double val1{0}, val2{0};

	while (cin>>val1>>val2) {
		if (val1 == val2) {
			cout<<"The numbers are equal\n";
		} else {
			cout<<"The smaller value is: "<<min(val1, val2)<<"\n";
			cout<<"The larger value is: "<<max(val1, val2)<<"\n";
		}
		if (almost_equal(val1, val2)) {
			cout<<"the numbers are almost equal\n";
		}
	}
	return 0;
}