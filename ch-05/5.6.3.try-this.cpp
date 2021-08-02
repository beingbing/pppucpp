#include "std_lib_facilities.h"
using namespace std;

int main() {
	cout<<"enter a number\n";
	int numb;
	cin>>numb;
	if(numb<=0) error("non positive number");
	cout<<"number is positive\n";
	return 0;
}
