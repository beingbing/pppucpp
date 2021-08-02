#include "std_lib_facilities.h"
using namespace std;

int main () {
	int i=0;
	while (i<26) {
		cout<<char('a'+i) << '\t' << int('a'+i)<<"\n";
		i++;
	}
	return 0;
}