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
	if (temps.size()%2 != 0) {
		cout<<"Median Temperature: "<<temps[(temps.size()-1)/2]<<"\n";
	} else {
		cout<<"Median Temperature: "<<(temps[temps.size()/2] + temps[((temps.size()/2)-1)])/2<<"\n";
	}

	return 0;
}