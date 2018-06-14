#include "std_lib_facilities.h"
using namespace std;

int main () {
	vector<double> temps;

	for (double temp; cin>>temp;) {
		temps.push_back(temp);
	}

	double sum{0};
	double high_temp{0};
	double low_temp{0};

	for (int x: temps) {
		if (x>high_temp) high_temp=x;
		if (x<low_temp) low_temp=x;
		sum += x;
	}

	cout<<"Highest Temperature: "<<high_temp<<"\n";
	cout<<"Lowest Temperature: "<<low_temp<<"\n";
	cout<<"Average Temperature: "<<sum/temps.size()<<"\n";
	return 0;
}