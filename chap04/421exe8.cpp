#include "std_lib_facilities.h"
using namespace std;

int main() {
	double square{1},i{1},total_grains{0},result{1};
	bool is1000{false},is1000000{false},is1000000000{false};
	for(;i<=64;i++) {
		cout<<"i "<<i<<"\n";
		result = result*2;
		cout<<"result "<<result<<"\n";
		total_grains += result;
		cout<<"total_grains "<<total_grains<<"\n";
		if (total_grains>1000 && !is1000) {
			is1000 = true;
			cout<<"for giving investor atleast 1000 grains\n";
			cout<<i<<" squares are required\n";
		}
		if (total_grains>1000000 && !is1000000) {
			is1000000 = true;
			cout<<"for giving investor atleast 1000000 grains\n";
			cout<<i<<" squares are required\n";
		}
		if (total_grains>1000000000 && !is1000000000) {
			is1000000000 = true;
			cout<<"for giving investor atleast 1000000000 grains\n";
			cout<<i<<" squares are required\n";
		}
	}
	return 0;
}