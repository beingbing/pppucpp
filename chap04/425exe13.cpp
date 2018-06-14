#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<int> primes(100, 1);
	for (int i{2}; i<100; i++) {
		if (primes[i]==1) {
			for(int j=i*i; j<100; j += i) {
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
	return 0;
}