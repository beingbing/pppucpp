#include "std_lib_facilities.h"
using namespace std;

int square(int n){
	int k=0;
	for (int i=0;i<n;i++){
		k = k+n;
	}
	return k;
}

int main () {
	cout<<"Enter a number\n";
	int n=0;
	cin>>n;
	cout<<"Its square is "<<square(n)<<"\n";
	return 0;
}