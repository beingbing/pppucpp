#include "std_lib_facilities.h"
using namespace std;

double ctof(double c) {
	double f= 9.0/5.0*c + 32.0;
	return f;
}

double ftoc(double f) {
	double c = (f - 32)*5.0/9.0;
	return c;
}

int main() {
	cout<<"in which unit you are entering the value c or f\n";
	char x{' '};
	cin>>x;
	cout<<"Enter the value\n";
	double res{0.0}, val{0.0};
	cin>>val;
	if (x == 'c') {
		res = ctof(val);  
	} else if (x == 'f') {
		res = ftoc(val);
	} else {
		cout<<"we didn't recognize that unit\n";
	}
	cout<<res<<'\n';
}