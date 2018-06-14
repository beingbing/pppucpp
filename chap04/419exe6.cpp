#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter a number in words or in numericals between 0 (zero) and 9(nine) both inclusive\n";
	vector<string> words{"zero","one","two","three","four","five","six","seven","eight","nine"};
	vector<string> numbers{"0","1","2","3","4","5","6","7","8","9"};
	string val;
	cin>>val;
	while (cin>>val) {
		for(int i{0};i<words.size();i++) {
			if (val==words[i]) {
				cout<<numbers[i]<<"\n";
			}
		}
		for(int i{0};i<numbers.size();i++) {
			if (val==numbers[i]) {
				cout<<words[i]<<"\n";
			}
		}
	}
	return 0;
}