#include <iostream>
#include <vector>
using namespace std;
int main () {
	vector<int> numbers;
	int temp; 
	for (;cin>>temp; ) {
		numbers.push_back(temp);
	}
	cout<<"\n";
	for ( int i=0; i<numbers.size(); i++ ) {
		cout<<numbers[i]<<"\t";
	}
	return 0;
}
