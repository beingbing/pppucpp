#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
	vector<string> names{"one", "two", "three", "four", "five"};
	int n{0};
	while (cin>>n) {
		cout<<names[--n]<<'\n';
	}
	return 0;
}