#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter n\n";
	int n{0};
	cin>>n;
	if (n == 1) {
		cout<<"2\n";
		return 0;
	}
	cout<<"2 3 ";
	n = n - 2;
	int limit=5;
	while (n > 0) {
		for (int i{2}; i<=limit/2; i++) {
			if (limit%i==0) {
				limit++;
				break;
			} else if (2*i+1>=limit) {
				n--;
				cout<<limit<<" ";
				limit++;
				break;
			}
		}
	}
	cout<<"\n";
	return 0;
}