#include "std_lib_facilities.h"
using namespace std;
int main() {
	cout<<"enter a sentence\n";
	int number = 0;
	string previous = "";
	string current;
	while (cin>>current) {
		++number;
		if ( previous == current ) {
			cout<<"repeated word: "<<current<<" is at position "<<number<<"\n";
		}
		previous = current;
	}
	return 0;
}

