#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<double> temps;

	for (double temp; cin>>temp;) {
		temps.push_back(temp);
	}

	double sum=0;
	for (int x:temps) {
		sum +=x;
	}
	cout<<"Average Temperature: "<<sum/temps.size()<<"\n";

	sort(temps);
	cout<<"Median Temperature: "<<temps[temps.size()/2]<<"\n";

	return 0;
}