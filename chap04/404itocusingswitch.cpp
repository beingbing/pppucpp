#include "std_lib_facilities.h"
using namespace std;

int main () {
	constexpr double cm_per_inch = 2.54;
	double length = 1;
	char unit ;
	cout<<"Enter a length followed by a unit (i or c)\n";
	cin>>length>>unit;
	switch(unit) {
		case 'i':
		cout<<"in cm it will be "<<length*cm_per_inch<<" cm\n";
		break;
		case 'c':
		cout<<"in inch it will be "<<length/cm_per_inch<<" inch\n";
		break;
		default:
		error("wrong unit");
	}
	return 0;
}