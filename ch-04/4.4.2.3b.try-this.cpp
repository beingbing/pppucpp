#include "std_lib_facilities.h"
using namespace std;

int main () {
	for (int i=0;i<26;i++) {
		cout<<char('a'+i) << '\t' << int('a'+i)<<"\n";
	}
	for (int i=0;i<26;i++) {
		cout<<char('A'+i) << '\t' << int('A'+i)<<"\n";
	}
	for (int i=0;i<10;i++) {
		cout<<char('0'+i) << '\t' << int('0'+i)<<"\n";
	}
	return 0;
}