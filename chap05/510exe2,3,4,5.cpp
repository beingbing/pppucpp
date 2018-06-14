#include "std_lib_facilities.h"
using namespace std;

double ctok(double c) {
	if (c < -273.15) error("you can't give a value lower than -273.15c");
	double k= c + 273.15;
	return k;
}

double ktoc(double k) {
	if (k < 0) error("you can't give a value lower than 0K");
	double c = k - 273.15;
	return c;
}

int main() {
	cout<<"in which unit you are entering the value c or k\n";
	char x{' '};
	cin>>x;
	cout<<"Enter the value\n";
	double res{0.0}, val{0.0};
	cin>>val;
	if (x == 'c') {
		res = ctok(val);  
	} else if (x == 'k') {
		res = ktoc(val);
	} else {
		cout<<"we didn't recognize that unit\n";
	}
	cout<<res<<'\n';
}