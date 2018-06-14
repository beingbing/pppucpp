#include "std_lib_facilities.h"
using namespace std;

int main () {
	double sum{0};
	double high_temp{-1000};
	double low_temp{1000};
	int no_of_temps{0};

	for (double temp; cin>>temp;) {
		++no_of_temps;
		sum += temp;
		if (temp>high_temp) high_temp=x;
		if (temp<low_temp) low_temp=x;
	}

	cout<<"Highest Temperature: "<<high_temp<<"\n";
	cout<<"Lowest Temperature: "<<low_temp<<"\n";
	cout<<"Average Temperature: "<<sum/temps.size()<<"\n";
	return 0;
}