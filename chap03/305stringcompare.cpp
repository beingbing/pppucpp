#include "std_lib_facilities.h"
using namespace std;
int main() {
	cout<<"enter two names to compare\n";
	string firstName="", secondName="";
	cin>>firstName>>secondName;
	if ( firstName == secondName ) {
		cout<<"you entered same name twice\n";
	} else if ( firstName > secondName ) {
		cout<<firstName<<" is alphabetically after "<<secondName<<"\n";
	} else {
		cout<<secondName<<" is alphabetically after "<<firstName<<"\n";
	}
	return 0;
}
