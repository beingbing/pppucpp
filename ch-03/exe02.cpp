#include "std_lib_facilities.h"
int main () {
	cout<<"Enter a value for number of miles\n";
	double miles;
	cin>>miles;
	double km = miles*1.609;
	cout<<"\nIt makes "<<km<<" kms\n.";
	return 0;
}