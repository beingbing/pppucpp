#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter max limit\n";
	int n{0};
	cin>>n;
	cout<<"the prime numbers between 1 to "<<n<<" are (both inclusive)\n";
	vector<int> primes(n, 1);
	for (int i{2}; i<n; i++) {
		if (primes[i]==1) {
			for(int j=i*i; j<n; j += i) {
				primes[j] = 0;
			}
		}
	}
	for (int i{0}; i<primes.size(); i++) {
		if (primes[i]==1) {
			if (i!=0 && i!=1) {
				cout<<i<<" ";
			}
		}
	}
	cout<<'\n';
	return 0;
}