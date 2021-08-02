#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"enter a digit between 0 to 9, both inclusive\n";
	int number;
	cin>>number;
	switch(number) {
		case 0: case 2: case 4: case 6: case 8:
		cout<<"is even\n";
		break;
		case 1: case 3: case 5: case 7: case 9:
		cout<<"is odd\n";
		break;
		default:
		cout<<"I didn't recognize the number\n";
	}
	return 0;
}