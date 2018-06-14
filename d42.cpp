#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	vector<int> numbers;
	for (int temp;cin>>temp; ) {
		numbers.push_back(temp);
	}
	sort(numbers.begin(), numbers.end());
	cout<<"\n";
	cout<<"The greatest number is: "<<numbers[numbers.size()-1]<<"\n";
	cout<<"The smallest number is: "<<numbers[0]<<"\n";
	return 0;
}
