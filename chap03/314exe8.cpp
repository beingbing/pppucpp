#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"enter a number\n";
	int n=0;
	cin>>n;
	if (n%2 == 0) {
		cout<<"The value "<<n<<" is an even number\n";
	} else {
		cout<<"The value "<<n<<" is an odd number\n";
	}
	return 0;
}