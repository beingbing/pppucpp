#include "std_lib_facilities.h"
using namespace std;

int main () {
	int penny, nickel, dime, quarter, half, take_doll;
	cout<<"Enter how many pennies you have\n";
	cin>>penny;
	cout<<"Enter how many nickels you have\n";
	cin>>nickel;
	cout<<"Enter how many dime you have\n";
	cin>>dime;
	cout<<"Enter how many quarters you have\n";
	cin>>quarter;
	cout<<"Enter how many half-dollars you have\n";
	cin>>half;
	cout<<"Enter how many dollars you have\n";
	cin>>take_doll;
	if (penny <= 1) {
		cout<<"You have "<<penny<<" penny\n";
	} else {
		cout<<"You have "<<penny<<" pennies\n";
	}
	if (nickel <= 1) {
		cout<<"You have "<<nickel<<" nickel\n";
	} else {
		cout<<"You have "<<nickel<<" nickels\n";
	}
	if (dime <= 1) {
		cout<<"You have "<<dime<<" dime\n";
	} else {
		cout<<"You have "<<dime<<" dimes\n";
	}
	if (quarter <= 1) {
		cout<<"You have "<<quarter<<" quarter\n";
	} else {
		cout<<"You have "<<quarter<<" quarters\n";
	}
	if (half <= 1) {
		cout<<"You have "<<half<<" half dollar\n";
	} else {
		cout<<"You have "<<half<<" half dollars\n";
	}
	if (take_doll <= 1) {
		cout<<"You have "<<take_doll<<" dollar\n";
	} else {
		cout<<"You have "<<take_doll<<" dollars\n";
	}
	return 0;
}