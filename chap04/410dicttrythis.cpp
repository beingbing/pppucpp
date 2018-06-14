#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<string> words;
	for(string temp; cin>>temp;) {
		words.push_back(temp);
	}
	cout<<"\nThe number of words entered are "<<words.size()<<"\n";
	sort(words);
	for(int i=0;i<words.size();i++) {
		if (words[i]=="man") {
			continue;
		}
		if (i == 0 || words[i-1]!=words[i]) {
			cout<<words[i]<<"\n";
		}		
	}
	return 0;
}
